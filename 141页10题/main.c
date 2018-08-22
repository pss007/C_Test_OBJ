#include <stdio.h>
int main()
{
   double i,f1=1,f2=1,s1=0.0,s2=0.0,s=0.0 ;
   for (i=1;i<=10;i++)
    {
        f1=f1+f2 ;
        s1=s1+f1/f2 ;
        f2=f2+f1 ;
        s2=s2+f2/f1 ;
        s=s1+s2 ;
    }
   printf ("s=%lf",s) ;
    return 0 ;
}
