#include <stdio.h>
int main()
{
   int *p1,*p2,a,b ;
   printf ("������������:") ;
   scanf ("%d,%d",&a,&b) ;
   p1=&a,p2=&b ;
   if (a<b) p1=&b,p2=&a ;
   printf ("����С�����%d,%d",*p1,*p2) ;
   return 0 ;
}
