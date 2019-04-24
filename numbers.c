#include <stdio.h>
#include <cs50.h>

int main(void)

{
    float myFloat = 3.87;
    float other = 1.52;
    float divison = (float)78/(float)15;

    // returns the float with the speceifed decimal places
    printf("adding the numbers: %.2f\n", myFloat + other);
    printf("the divison: %.2f\n", divison);

}