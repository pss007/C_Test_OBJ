#include <stdio.h>
int main()
{
    float score ;
    int i ;
    printf ("����ٷ��Ʒ�����\n") ;
    scanf ("%f",&score) ;
    while (score<0||score>100)
    {
         printf ("������������������ٷ��Ʒ�����\n") ;
         scanf ("%f",&score) ;
    }
    if (score>=90&&score<=100) i=1 ;
    if (score>=80&&score<90) i=2 ;
    if (score>=70&&score<80) i=3 ;
    if (score>=60&&score<70) i=4 ;
    if (score<60&&score>=0) i=5 ;
    switch (i)
    {
        case (1) : printf ("�ȼ�A\n") ;break ;
        case (2) : printf ("�ȼ�B\n") ;break ;
        case (3) : printf ("�ȼ�C\n") ;break ;
        case (4) : printf ("�ȼ�D\n") ;break ;
        case (5) : printf ("�ȼ�E\n") ;break ;
    }
    return 0 ;
}
