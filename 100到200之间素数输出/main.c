#include<stdio.h>
int main()
{
    int i,j,num=0;
    for (i=100;i<=200;i++)
    {
        for (j=2;j<i;j++)
        if (i%j==0) break ;
        if (j>=i)           /*���������ж��������ڶ���for������������� j=i */
        {
            printf ("%d ",i) ;
            num=num+1 ;
        }
        if (num%10==0) printf ("\n") ;
    }
    printf ("��%d��",num) ;
    return 0 ;
}
