#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)

{
    string gender = get_string("What is your gender?");
    string name = get_string("What is your first name? ");
    string lastname = get_string("What is your last name? ");

    if (strncmp(gender, "male", 4) == 0)
    {
    printf("Hello Mr. %s %s\n", name, lastname);
    } else
    {
    printf("Hello Mrs. %s %s\n", name, lastname);
    }
}