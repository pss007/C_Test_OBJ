#include <stdio.h>
int main()
{
    float p,r,i ;
    int n ;
    printf ("����i��������r���������n�ֱ����£�\n") ;
    scanf ("%f,%f,%d",&i,&r,&n) ;
    p=i*(1+n*r) ;
    printf ("��Ϣ��=%f",p) ;
    return 0 ;
}
