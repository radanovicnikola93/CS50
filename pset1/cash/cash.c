#include <stdio.h>
#include <cs50.h>
#include <math.h>   // included math.h for the round function

int main(void)
{
    int cents;
    float dollars;
    int coins = 0;
    
    // Asks the user for change owed. Only positive numbers or floats are permitted. 
    do 
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    
    // We convert dollars to cents and round the value
    cents = round(dollars * 100);
    
    // QUARTERS: checks if cents are divided with quarters. If not it moves to dimes.
    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    } 
    
    // DIME: checks if cents are divided with dimes. If not it moves to pickels.    
    while (cents >= 10) 
    {
        coins++;
        cents -= 10;
    }
    
    // PICKELS: checks if cents are divided with pickels. If not it moves to pennies.
    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }
    
    // PENNY: checks if cents are divided with pennies
    while (cents >= 1)
    {
        coins++;
        cents -= 1;
    }
    
    // Prints number of coins used to give the required change
    printf("%i\n", coins);
}
