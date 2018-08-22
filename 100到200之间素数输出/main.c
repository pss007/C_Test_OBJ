#include<stdio.h>
int main()
{
    int i,j,num=0;
    for (i=100;i<=200;i++)
    {
        for (j=2;j<i;j++)
        if (i%j==0) break ;
        if (j>=i)           /*这里用来判断素数，第二个for语句正常结束后 j=i */
        {
            printf ("%d ",i) ;
            num=num+1 ;
        }
        if (num%10==0) printf ("\n") ;
    }
    printf ("共%d个",num) ;
    return 0 ;
}
