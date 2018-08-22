#include <stdio.h>
int main()
{
    int i,j,num=0 ;
    for (i=1;i<=4;i++)
    for (j=1;j<=5;j++,num=num+1)
    {
        if (num%5==0)
        printf ("\n") ;
        printf ("%d\t",i*j) ;
    }
    printf ("\n") ;
    return 0;
}
