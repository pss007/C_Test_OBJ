#include"stdio.h"
int main()
{
    struct Person
    {
        char name[20] ;
        int count ;
    }leader[3]={"li",0,"zhang",0,"sun",0} ;
    int i,j ;
    char leader_name[20] ;
    for (i=0;i<10;i++)
    {
        scanf ("%s",leader_name) ;             // name是数组 数组名代表地址
        for (j=0;j<3;j++)
          if (strcmp(leader_name,leader[j].name)==0) leader[j].count++ ;     // 字符串比较用strcmp
    }
    printf ("\nresult:\n") ;
    for (j=0;j<3;j++)
    printf ("%s:%d\n",leader[j].name,leader[j].count) ;
    return 0 ;
}
