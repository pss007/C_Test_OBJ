#include <stdio.h>
int main()
{
   int i ;
   float h=100.0,s=100.0 ;
   for (i=1;i<=10;i++)
   {
       h=h/2 ;
       s=s+2*h ;     //2*h表示反弹再落下经历两次h
   }
   printf ("h=%f s=%f",h,s) ;
    return 0 ;
}
