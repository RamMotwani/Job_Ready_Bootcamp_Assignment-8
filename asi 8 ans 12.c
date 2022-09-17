#include<stdio.h>
int main()
{
    int i,j;
    char a;
    for(i=1;i<=4;i++)
    {
        a='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<4)
                {
                    printf("%c",a);
                    a++;
                }
                else
                {

                    printf("%c",a);
                    a--;
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
