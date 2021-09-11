#include <cs50.h>
#include <stdio.h>

int main(void)

{

    int years;

    // TODO: Prompt for start size

    int initialValue;

    do

    {

        initialValue = get_int("Start size: ");

    }

    while (initialValue < 9);

    // TODO: Prompt for end size

    int finalValue;

    do

    {

        finalValue = get_int("End size: ");

    }

    while (finalValue < initialValue);

    // TODO: Calculate number of years until we reach threshold

    for(years = 0; initialValue < finalValue; years++)

    {

        initialValue = initialValue + (initialValue/3) - (initialValue/4);

    }

    // TODO: Print number of years

    printf("Years: %i\n", years);

}
