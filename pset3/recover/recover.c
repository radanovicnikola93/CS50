#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Checks if there is only one command line argument
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }

    // Remember file name
    char *infile = argv[1];

    // Opens input file
    FILE *intpr = fopen(infile, "r");
    if (intpr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // Create output file
    FILE *outptr = NULL;

    // Create buffer array
    unsigned char buffer[512];

    // Create filename array
    char filename[8];

    // Set counter for filename
    int counter = 0;

    // Read throughout the file
    while (fread(buffer, sizeof(buffer), 1, intpr) == 1)
    {
        // Find the beggining of JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // correct filename
            sprintf(filename, "%03d.jpg", counter);

            // opening output file
            outptr = fopen(filename, "w");

            // writing JPEG to output file
            fwrite(buffer, sizeof(buffer), 1, outptr);

            counter++;

        } // if

        else
        {
            if (outptr != NULL)
            {
                fwrite(buffer, sizeof(buffer), 1, outptr);
            }
        } // else
    }  // while

    fclose(outptr);
    fclose(intpr);

    return 0;

} // main
