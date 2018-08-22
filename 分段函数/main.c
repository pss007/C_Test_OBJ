#include <stdio.h>
#include <math.h>
int main()
{
    float x ,y ;
    printf ("ÊäÈëxµÄÖµ£º\n") ;
    scanf ("%f",&x) ;
    if (x<1)
      y=x ;
    else if (x>=1&&x<10)
      y=2*x-1 ;
    else
      y=3*x-11 ;
    printf ("y=%f",y) ;
    return 0 ;
}
