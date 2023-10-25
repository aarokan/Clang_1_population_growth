#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startSize, endSize;
    // TODO: Prompt for start size
    do
    {
        startSize = get_int("Start Size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    do
    {
        endSize = get_int("End Size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (startSize < endSize)
    {
        startSize += (startSize / 3) - (startSize / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}