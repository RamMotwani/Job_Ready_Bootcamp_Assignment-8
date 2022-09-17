#include<stdio.h>
int main()
{
    int i,j;
    char a;
    for(i=1;i<=5;i++)
    {
        a='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(j<=5)
                {
                    printf("%c",a);
                    a++;
                }
                else
                {
                    a--;
                    printf("%c",a-1);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
