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
        printf ("����������ݣ�\n") ;
        scanf ("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job) ;
        if (person[i].job=='s')
          scanf ("%d",&person[i].category.clas) ;
        else if (person[i].job=='t')
          scanf ("%s",&person[i].category.position) ;
          else printf ("��������\n") ;
    }
    printf ("\n") ;
    printf ("NO.   name   sex   job   clas/position\n") ;
    for (i=0;i<2;i++)
    {
        if (person[i].job=='s')
          printf ("%-6d%-7s%-6c%-6c%-4d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas) ;
        else
          printf ("%-6d%-7s%-6c%-6c%-4s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position) ;
    }                    //����ѧ��ʹ��-6d%��ʮ����������ʽ��� ռ���� �����������
    return 0 ;
}
