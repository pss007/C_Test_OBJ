#include <stdio.h>
int main()
{
    float i=1000,r1=0.0468,r2=0.054,p1,p ;
    int n1=2,n2=3 ;
    p1=i*(1+n1*r1) ;
    p=p1*(1+n2*r2) ;
    printf ("p=%f",p) ;
    return 0 ;
}
