#include"stdio.h"
struct
{
    int num ;
    char name[20] ;
    char sex ;
    char job ;
    union
    {
        int clas ;
        char position[20] ;
    }category ;
}person[2] ;
int main()
{
    int i ;
    for (i=0;i<2;i++)
    {
        printf ("输入个人数据：\n") ;
        scanf ("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job) ;
        if (person[i].job=='s')
          scanf ("%d",&person[i].category.clas) ;
        else if (person[i].job=='t')
          scanf ("%s",&person[i].category.position) ;
          else printf ("输入有误\n") ;
    }
    printf ("\n") ;
    printf ("NO.   name   sex   job   clas/position\n") ;
    for (i=0;i<2;i++)
    {
        if (person[i].job=='s')
          printf ("%-6d%-7s%-6c%-6c%-4d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas) ;
        else
          printf ("%-6d%-7s%-6c%-6c%-4s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position) ;
    }                    //这里学会使用-6d%是十进制整数形式输出 占六列 数据向左对齐
    return 0 ;
}
