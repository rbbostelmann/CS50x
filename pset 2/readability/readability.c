#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*  Prototypes: */
int count_letters(string word);
int count_words(string word);
int count_sentences(string word);
int coleman_liau_index(float L, float S);
/*  End of prototypes.*/

/*  Global variables: */
int letters;
int words;
int sentences;
int index;
/*  End of global variables.*/

/*  Start of main function: */
int main(void)
{
    string text = get_string("Text: ");

    count_letters(text);
    count_words(text);
    count_sentences(text);

    coleman_liau_index(letters, sentences);

    /*  Debugging statements:
     *printf("Input:      %s\n", text);
     *printf("Length:     %d\n", letters);
     *printf("Words:      %d\n", words);
     *printf("Sentences:  %d\n", sentences);
     * End of debugging statements.
     */

    // Prints the results based on the grade index:
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
/*  End of main function.*/

/*  Function implementations: */
int count_letters(string word)
{
    // Excludes spaces and symbols/punctuation (ASCII comparison)
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if ((word[i] >= 'a' && word[i] <= 'z') ||
            (word[i] >= 'A' && word[i] <= 'Z'))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string word)
{
    /*
     * The number of words is generally going to
     * equal the number of spaces + 1 in a sentence.
     * So here we count the number of spaces (ASCII 32)
     * and exclude the cases in which the number of spaces
     * equals the length of the input (multiple spaces).
     */

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (word[i] == 32)
        {
            words++;
        }
    }
    if (words == strlen(word))
    {
        words = 0;
    }
    else
    {
        words = words + 1;
    }
    return words;
}

int count_sentences(string word)
{
    // Assuming that sentences always end in either ".", "?", or "!".
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if ((word[i] == '.' || word[i] == '?' || word[i] == '!'))
        {
            sentences++;
        }
    }
    return sentences;
}
/*  End of function implementations.*/

/*  Coleman-Liau index of readability: index = 0.0588 * L - 0.296 * S - 15.8*/
int coleman_liau_index(float L, float S)
{
    index = round(0.0588 * (letters / (float)words * 100) - 0.296 * (sentences / (float)words * 100) - 15.8);

    return index;
} /* End of function implementation.*/