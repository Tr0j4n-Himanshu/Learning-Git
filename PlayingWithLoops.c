#include<stdio.h>
int main()
{
    int n;
    printf("Enter No. - ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        //stars
        for(int j=0;j<i*2+1;j++)
        {
            printf("*");
        }
        //space
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}

