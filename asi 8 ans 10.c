#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<i+3 && j>=6-i)
            {
                printf(" ");
            }
            else if(j<=4)
            {
                printf("%d",k);
                k++;
            }
            else if (j>=5)
            {
                if(i<2)
                {
                k--;
                printf("%d",k-1);
                }
                else
                {
                    k--;
                    printf("%d",k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
