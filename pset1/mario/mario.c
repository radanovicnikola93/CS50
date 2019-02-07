#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
        // Prompting user for height
        height = get_int("To draw a pyramid please enter a number between 1 and 8: ");
    }
    // Checking if user typed a positive integer and an integer between 0 and 8
    while (height < 1 || height > 8);
    
    // Print number of lines
    for (int lines = 0; lines < height; lines++)
    {
        // Spaces
        for (int space = height - lines; space > 1; space--)
        {
            printf(" ");
        }
        
        // Hashes
        for (int hash = 0; hash < lines + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
