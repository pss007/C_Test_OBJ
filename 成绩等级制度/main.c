#include <stdio.h>
int main()
{
    float score ;
    int i ;
    printf ("输入百分制分数：\n") ;
    scanf ("%f",&score) ;
    while (score<0||score>100)
    {
         printf ("输入有误，请重新输入百分制分数：\n") ;
         scanf ("%f",&score) ;
    }
    if (score>=90&&score<=100) i=1 ;
    if (score>=80&&score<90) i=2 ;
    if (score>=70&&score<80) i=3 ;
    if (score>=60&&score<70) i=4 ;
    if (score<60&&score>=0) i=5 ;
    switch (i)
    {
        case (1) : printf ("等级A\n") ;break ;
        case (2) : printf ("等级B\n") ;break ;
        case (3) : printf ("等级C\n") ;break ;
        case (4) : printf ("等级D\n") ;break ;
        case (5) : printf ("等级E\n") ;break ;
    }
    return 0 ;
}
