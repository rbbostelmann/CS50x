#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    /*
     * The following variables are temporary placeholders
     * that change values according to the arguments that
     * were passed at the beginning of the main function
     * call.
     */

    string temp_winner;
    int temp_votes = 0;

    /*
     * If the number of votes is bigger than temp_votes,
     * replace temp_votes.
     *
     * Repeat that process for temp_winner.
     */

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > temp_votes)
        {
            temp_winner = candidates[i].name;
            temp_votes = candidates[i].votes;
        }
    }

    /*
     * This loop accounts for ties:
     * If there are two or more strings with the same name and
     * if they share the same number of votes as temp_votes
     * it prints the winners on different lines.
     *
     * Else, it prints the single winner.
     */

    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, temp_winner) != 0)
        {
            if (candidates[i].votes == temp_votes)
            {
                printf("%s\n", candidates[i].name);
            }
        }
    }
    printf("%s\n", temp_winner);
    return;
}