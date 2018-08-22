#include <stdio.h>
int main()
{
    float i=1000,r1=0.054,r2=0.0468,p1,p ;
    int n1=3,n2=2 ;
    p1=i*(1+n1*r1) ;
    p=p1*(1+n2*r2) ;
    printf ("本息和是%f",p) ;
    return 0 ;
}
