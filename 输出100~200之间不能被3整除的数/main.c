#include <stdio.h>
int main()
{
    int i,num=0 ;
    for (i=100;i<=200;i++)
    {
       if(i%3!=0)
       printf ("%d ",i) ;
       num=num+1 ;
    }
    printf ("\n��%d��\n",num) ;
    return 0;
}
