#include <cs50.h>
#include <stdio.h>

// Declare funcion
int calculateYears(int, int);

int main(void)
{
    // Prompt the user for a starting population size
    int startingSize = get_int("Enter starting population size: ");

    // Prompt the user for a Ending population size
    int endingSize = get_int("Enter ending population size: ");

    // Call calculate years function
    int years = calculateYears(startingSize, endingSize);

    printf("years = %i", years);
}

// Calculate number of years for the population to reach the size
int calculateYears(startSize, endSize)
{
    int years = 0;
    while (startSize < endSize)
    {
        /* Say we have a population of n llamas. 
        Each year, n / 3 new llamas are born, and n / 4 llamas pass away.*/
        startSize += (startSize / 3) - (startSize / 4);
        years += 1;
    }
    return years;       
}