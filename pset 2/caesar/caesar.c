#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/* Prototype: */
char rotate(char placeholder, int key);
/*End of prototype.*/

/* Main function: */
int main(int argc, string argv[])
{
    /*
     * Checks for number of command-line arguments.
     * More or less than 1 returns a usage message
     */
    if (argc != 2)
    {
        printf("Usage: Please use a single numeric argument.\n");
        return 1;
    }
    else
    {
        /*
         * Continues the validation process:
         * - Is the argument a decimal digit?
         * Iterates through the key to check
         * all values.
         */
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (!(isdigit(argv[1][i])))
            {
                printf("Usage: ./caesar key.\n");
                return 1;
            }
        }
    }

    // Converts the key into an integer:
    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext:  ");
    int len = strlen(plaintext);

    printf("ciphertext: ");

    // Encrypts the text calling the rotate() function:
    for (int i = 0; i < len; i++)
    {
        rotate(plaintext[i], key);
    }
    printf("\n");
    return 0;
}
/* End of main function.*/

/* Function implementation: */
char rotate(char placeholder, int key)
{
    // If the char has an ASCII value less than 91 the base becomes 65 ('a'), else 97 ('A'):
    int base = (placeholder < 91) ? 65 : 97;

    // Checks if the value is a valid alphabet input and case:
    if ((isalpha(placeholder) || isalpha(placeholder)) &&
        (islower(placeholder) || isupper(placeholder)))
    {
        // Converts the resulting ASCII value to a char, according to its original case:
        int result = (((placeholder - base) + key) % 26) + base;
        printf("%c", result);
    }
    // If the char is not alphabetical it just prints the character as is (symbols, space, etc):
    else
    {
        printf("%c", placeholder);
    }
    return 0;
}
/* End of function implementation.*/