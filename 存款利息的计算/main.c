#include <stdio.h>
int main()
{
    float p,r,i ;
    int n ;
    printf ("存款额i，年利率r，存款年数n分别如下：\n") ;
    scanf ("%f,%f,%d",&i,&r,&n) ;
    p=i*(1+n*r) ;
    printf ("本息和=%f",p) ;
    return 0 ;
}
