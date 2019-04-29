#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    int myFloat = round(3.87 * 100);
    int other = round(1.52 * 100);
    int total = myFloat + other;
    int cents = total % 100;
    int dollars = total / 100;

    float divison = (float)78/(float)15;

    // returns the float with the speceifed decimal places
    printf("adding the numbers: %.2f\n", (float)total / 100);
    printf("the divison: %.2f\n", divison);

}