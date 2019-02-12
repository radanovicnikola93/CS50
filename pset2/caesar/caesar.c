#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>  // for atoi
#include <string.h>  // for strlen
#include <ctype.h> // for islower and isupper functions


int main(int argc, char *argv[])
{   

    // The user must provide just 2 command arguments. Otherwhise the program will end immediately.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    // Only integers allowed in the command line argument
    for (int c = 0, lenght = strlen(argv[1]); c < lenght; c++)
    {
        if (isdigit(argv[1][c]) == false)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }

    // We convert the second element of the array from a string to integer
    int key = atoi(argv[1]);

    // If it is a negative integer the program will end immediately
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    } 
        
    // Prompt the user for paintext
    string plaintext = get_string("Enter a plaintext: ");

    // Iterates over every character of the plaintext
    for (int c = 0, lenght = strlen(plaintext); c < lenght; c++)
    {
        // Lowercase
        if (islower(plaintext[c]))
        {
            plaintext[c] = ((((plaintext[c] + key) - 97) % 26) + 97);
        }

        // Uppercase
        else if (isupper(plaintext[c]))
        {
            plaintext[c] = ((((plaintext[c] + key) - 65) % 26) + 65);
        }
    }
    // Prints ciphertext 
    printf("ciphertext: %s\n", plaintext);
}
