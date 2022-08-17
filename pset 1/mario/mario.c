#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets user input and reinforces compliance
    int height;

    do
    {
        height = get_int("How many bricks should Mario jump over (from 1 to 8)? ");
    }

    while (height < 1 || height > 8);

    // Iterates through the lines the given number of times
    for (int i = 0; i < height; i++)
    {
        // Loop for the initial spaces
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");
        }

        // Left side of the "pyramid"
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // Loop for the gap between the right and left sides
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }

        // Right side of the "pyramid"
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}