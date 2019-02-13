#include <cs50.h>
#include <stdio.h>
#include <string.h>  // for strlen
#include <ctype.h> // for isalpha, isupper, islower


int main(int argc, char *argv[])
{
    // If the command line argument results of too many keywoards the program will end
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    string key = argv[1];
    int lenght = strlen(key);
    // We check if the key is composed only of alphabet characters a to z and not integers
    for (int c = 0; c < lenght; c++)
    {
        if (isalpha(key[c]) == false)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }

    // Prompt the user for plaintext
    string plaintext = get_string("Plaintext: ");


    for (int c = 0, index = 0, lenghtp = strlen(plaintext); c < lenghtp; c++)
    {
        if (isalpha(plaintext[c]))
        {
            // Lowercase
            if (islower(plaintext[c]))
            {
                plaintext[c] = ((plaintext[c] - 97 + toupper(key[index]) - 65) % 26 + 97);
            }

            // Uppercase
            else if (isupper(plaintext[c]))
            {
                plaintext[c] = ((plaintext[c] - 65 + toupper(key[index]) - 65) % 26 + 65);
            }
            index = (index + 1) % lenght;
        } // if statement
    } // for loop
    // Prints ciphertext
    printf("ciphertext: %s\n", plaintext);
} // main
