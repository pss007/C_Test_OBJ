#include <stdio.h>
#include <math.h>
int main()
{
    int i ;
    double pi=0.0,a,s=0.0,sign=1.0 ;     /*�����������ֻҪ�и�һ�Ǹ����� ������Ǹ����� �������׳��ֽ�������мǣ�*/
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
