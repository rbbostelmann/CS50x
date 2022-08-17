#include <cs50.h>
#include <stdio.h>
#include <math.h>

/* Prototypes: */
int get_length(long ccNumber);
int get_digits_at(long number, int index, int offset);
int get_sum_right(long number, int length);
int get_sum_left(long number, int length);
int check_amex(int length, int start_digits);
int check_visa(int length, int start_digits);
int check_master(int length, int start_digits);
/* End of prototypes. */

/* Main function: */
int main(void)
{
    long ccNumber = get_long("Please insert a credit card number: ");
    int length = get_length(ccNumber);
    int start_digits = get_digits_at(ccNumber, length, 2);

    int sum_right = get_sum_right(ccNumber, length);
    int sum_left = get_sum_left(ccNumber, length);
    int total = sum_right + sum_left;

    // Checks for validity:
    if (total % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (check_amex(length, start_digits) == true)
    {
        printf("AMEX\n");
    }
    else if (check_visa(length, start_digits) == true)
    {
        printf("VISA\n");
    }
    else if (check_master(length, start_digits) == true)
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
/* End of main function. */

/*
 *   Implementation of getter functions:
 *   - get_length, and
 *   - get_digits_at
 */

// Gets the length of the user input:
int get_length(long ccNumber)
{
    int count = 0;
    if (ccNumber == 0)
    {
        return 1;
    }
    while (ccNumber != 0)
    {
        ccNumber = ccNumber / 10;
        ++count;
    }
    return count;
}

// Gets digits at ceratin indice:
int get_digits_at(long number, int index, int offset)
{
    long pow1 = pow(10, index);
    long pow2 = pow(10, index - offset);
    return (number % pow1) / pow2;
}
/* End of getter functions implementation. */

/*
 *  Sum checks & Luhn’s Algorithm implemention:
 *  Checks if the alternate sum of the product of the
 *  digits is valid when summed and confirmed to have
 *  % 10 == 0 back in the variable "total".
 *
 *  This implementation was taken from Matul Jain. I
 *  sincerely suck at math and could not have come
 *  up with that offset trick. I spent way too much
 *  time trying to convert the input to an array,
 *  though that also didn't work as planned.
 */

int get_sum_right(long number, int length)
{
    int sum = 0;
    for (int i = 2; i <= length; i += 2)
    {
        int digit = get_digits_at(number, i, 1) * 2;
        sum += digit < 10 ? digit : 1 + (digit % 10);
    }
    return sum;
}

int get_sum_left(long number, int length)
{
    long sum = 0;
    for (int i = 1; i <= length; i += 2)
    {
        sum += get_digits_at(number, i, 1);
    }
    return sum;
}
/*  End of sum checks. */

/*
 * Individual functions that check for the CC
 * provider based on the number of CC digits and
 * returns true if finds a match.
 */

// Checks for AMEX validity:
int check_amex(int length, int start_digits)
{
    if ((length == 15) && (start_digits == 34 || start_digits == 37))
    {
        return true;
    }
    return 0;
}

// Checks for VISA validity:
int check_visa(int length, int start_digits)
{
    if ((length == 13 || length == 16) && start_digits / 10 == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

// Checks for MASTERCARD validity:
int check_master(int length, int start_digits)
{
    if ((length == 16) && (start_digits >= 51 && start_digits <= 55))
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}
/*  End of individual providers check. */