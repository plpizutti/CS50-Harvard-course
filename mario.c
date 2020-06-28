#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do 
    {
        n = get_int("What's the height?\n");
    }
    while(n<1 || n>8);
    
    for(int i=0; i<n; i++) //repeat n times
    {
        for(int j=0; j<n; j++)
        {
            if(i+j >= n-1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
