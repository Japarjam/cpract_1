// C Pract
// CS50 Problem Sets 

#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int age = get_in("What is your age?  \n");
    int days = age * 365;
    printf("You are at least %i years old \n", days);

}