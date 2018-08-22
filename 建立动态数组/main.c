#include"stdio.h"
#include<stdlib.h>
int main()
{
    void check(int *) ;                            //   函数声明
    int *p1,i ;
    p1=(int *)malloc(5*sizeof(int)) ;             //开辟动态内存区，将地址装换成int *型，然后放在p1中
    for (i=0;i<5;i++)
      scanf ("%d",p1+i) ;
    check(p1) ;
    return 0 ;
}
void check(int *p)                                 //形参是int*指针 这里和主函数声明时不一样的地方是 *p
{
    int i ;
    printf ("fail:") ;
    for (i=0;i<5;i++)
      if (p[i]<60) printf ("%d ",p[i]) ;
      printf ("\n") ;
}
