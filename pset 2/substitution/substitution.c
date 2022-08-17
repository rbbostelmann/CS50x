#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*  Prototypes: */
int cipher(string key);
/*  End of prototypes.*/

/*  Global variable: */
int invalid_characters;
/*  End of global variable.*/

/*  Main function: */
int main(int argc, string argv[])
{
    /*
     * Checks for number of command-line arguments.
     * More or less than 2 returns a usage message
     * (1 = something's wrong).
     */

    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    /*
     * Continues the validation process:
     * - Length of the key input ( = 26);
     */

    string key = argv[1];
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        /*
         * Continues the validation process:
         * - Alphabet only chars;
         * - Duplicate chars;
         */

        for (int i = 0; i < strlen(key); i++)
        {
            // Checks for alphabet only chars:
            if (!(key[i] >= 'a' && key[i] <= 'z') &&
                !(key[i] >= 'A' && key[i] <= 'Z'))
            {
                printf("Key must only contain alphabetic characters.");
                return 1;
            }
        }

        // Checks for duplicate chars in the key:
        for (int i = 0; i < strlen(key); i++)
        {
            for (int j = i + 1; j < strlen(key); j++)
            {
                if (toupper(key[i]) == toupper(key[j]))
                {
                    printf("Usage: ./substitution key\n");
                    return 1;
                }
            }
        }

        /*
         * If everything's alright it calls the
         * cipher() function that will return a
         * ciphertext to the user.
         */

        cipher(key);
    }
}
/*End of main function.*/

/*  Function implementation: */

/*
 * Ciphers the user input provided in
 * plaintext and then prints out the
 * ciphered text back to the user.
 */

int cipher(string key)
{
    string plaintext = get_string("plaintext:  ");

    // Converts the key input to uppercase:
    for (int i = 0; i < strlen(key); i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }

    printf("ciphertext: ");

    // If the plaintext char is upper, lower, and default cases.
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            /*
             * Identifies the position of the character in the alphabet
             * (and prints the letter in the same pos in the key):
             */

            int letter = plaintext[i] - 65;
            printf("%c", key[letter]);
        }
        else if (islower(plaintext[i]))
        {
            // Identifies the position of the lowercase characters:
            int letter = plaintext[i] - 97;
            // 32 is the difference between upper/lowercase letters in ASCII.
            printf("%c", key[letter] + 32);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
/*  End of function implementations.*/