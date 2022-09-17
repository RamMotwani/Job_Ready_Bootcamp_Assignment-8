#include<stdio.h>
int main ()
{
    int i,j;
    char a;
    for(i=1;i<=7;i++)
    {
        a='A';
        for(j=1;j<=13;j++)
        {
            if(j>8-i && j<=5+i)
            {
                printf(" ");
            }
            else if (j<7)
            {
                printf("%c",a);
                a++;

            }
            else if(j>=7)
            {
                if(i>=2)
                {
                    a--;
                printf("%c",a);
                }
                else
                {
                    printf("%c",a);
                    a--;
                }



            }
        }
        printf("\n");
    }
}
