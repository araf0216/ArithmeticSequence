// Araf Ahmed - this program determines whether a given sequence of numbers are in arithmetic sequence

#include <stdio.h>

// function that determines and returns whether the given sequence of numbers are in arithmetic sequence
int is_arithmetic_sequence(int *sequence, int n)
{
    // for loop that iterates from the second item to the second to last item in a sequence of numbers, comparing the previous and the next difference
    for (int *p = sequence + 1; p < sequence + n - 1; p++)
    {
        // if the difference between the previous and current numbers is not equivalent to the difference between the current and the next numbers, end the loop and return false
        if ((*p - *(p - 1)) != (*(p + 1) - *p))
        {
            return 0;
        }
    }
    // if loop is completed, conditions for arithmetic sequence hold true therefore return true
    return 1;
}

int main()
{
    printf("Enter length of the sequence: ");
    // gathers the number of numbers in sequence and stores them in variable n
    int n;
    scanf("%d", &n);

    printf("Enter numbers of the sequence: ");
    // gathers each of the n numbers in sequence and stores them in sequence array
    int sequence[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sequence[i]);
    }

    // calls to function is_arithmetic_sequence and then displays results
    if (is_arithmetic_sequence(sequence, n))
    {
        printf("The sequence entered is an arithmetic sequence.");
    }
    else
    {
        printf("Not an arithmetic sequence.");
    }
    return 0;
}