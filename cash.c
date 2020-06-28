#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    int cent;
//asks the user to inform the amount owed:
    do
    {
        dollar = get_float("Please enter the amount owed: ");
        cent = round(dollar * 100);
    }
    while (dollar < 0.0); // if the user prompts a negative value the program asks again

    int coins = 0; // initialize coins variable to count each coin will be necessary to complete the amount owed

    while (cent >= 25) //starts trying to use a quarter
    {
        coins++;
        cent = cent - 25;
    }

    while (cent >= 10 && cent < 25) // if a quarter does not fit, it tries to use a dime
    {
        coins++;
        cent = cent - 10;
    }

    while (cent >= 5 && cent < 10) // if a dime does not fit, it tries to use a nickel
    {
        coins++;
        cent = cent - 5;
    }

    while (cent >= 1 && cent < 5) // if a nickel does not fit, it tries to use a penny
    {
        coins++;
        cent = cent - 1;
    }

    printf("Minimum number of coins required: %i\n", coins); // returns the number of coins needed for the change
}
