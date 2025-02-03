#include <stdio.h>
#include <stdlib.h>

// This code is a C program that finds all the Narcissistic Numbers under a given number of digits (entered by the user).

// First, let me explain what a Narcissistic Number is: a Narcissistic Number is an n-digit number whose sum of 
// the numbers in each bit to the power of n is equal to itself.

// The main logic of the program is as follows:

// The user enters an integer x representing the number of digits.
// Calculate the largest possible number for this number (for example, if x is 3, then the largest number is 999).
// Starting with the largest number, check each number one by one to see if it is a Narcissistic Number.
// If a number meets the definition of Narcissistic Number, it is printed.

// Narcissistic Number Enter X Wei Number
// Output All Narcissistic Number of X Wei Number

int main()
{
    int x;
    x=3;
    printf("Enter X : ");
    scanf("%d", &x);
    int first=1;
    int i=1;
    while (i<x)
    {
        first*=10;
        i++;
    }
    i = first;
    while (i<first*10)
    {
        int t = i;
        int sum=0;
        do
        {
            int d=t%10;
            t/=10;
            int p=d;
            int j=1;
            while (j<x)
            {
                p*=d;
                j++;
            }
            sum+=p;
        } while (t>0);
        if (sum==i)
        {
            printf("%d\n", i);
        }
        i++; 
    }
    system("pause");
    return 0;
}