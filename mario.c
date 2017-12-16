# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int n;
    while(true) //Mechanism for checking correctnes of the input
    {
        printf("Height: ");
        n = get_int();
        if (n>=0 && n<24)
        {
            break; //If input is correct, this will stop the loop
        }
    }
    
    for (int i=0; i<n; i++) //Gives height to the structure
    {
        for (int j=0; j<n-i-1; j++) //Adds sufficient spacing
        {
            printf(" ");
        }
        for (int k=0; k<i+2; k++) //Adds the '#' symbol
        {
            printf("#");
        }
        printf("\n"); //Newline feed
    }
}