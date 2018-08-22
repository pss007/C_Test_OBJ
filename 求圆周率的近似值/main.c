#include <stdio.h>
#include <math.h>
int main()
{
    int i ;
    double pi=0.0,a,s=0.0,sign=1.0 ;     /*两个数相除，只要有个一是浮点型 结果就是浮点型 否则容易出现结果错误，切记！*/
    for (i=1;;i=i+2)
    {
        a=sign/i ;
        if (fabs(a)<1e-8) break ;
        s=s+a ;
        sign=-sign ;
        pi=4*s ;
    }
    printf ("pi=%10.8lf",pi) ;
    return 0 ;
}
