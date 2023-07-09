#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][3],b[3][3],mu[2][3];
    int sum=0;
    printf("Enter 1st matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }   
       
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int p = 0; p < 3; p++)
            {
                sum=sum+a[i][p]*b[p][j];
            }
            mu[i][j]=sum;
            sum=0;
        }
    }
    printf("The multification matrix=\n");
        
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",mu[i][j]);
        }
        printf("\n");
    }
    return 0;
}

