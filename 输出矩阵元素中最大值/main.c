#include <stdio.h>
int main()
{
    int i,j,row=0,column=0,max ;
    int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}} ;
    max=a[0][0] ;
    for (i=0;i<=2;i++)              /*������� ���for������һ����䲻�㸴����䣬����ʡ�Դ�����*/
    for (j=0;j<=3;j++)              /*���ж��Ǵ��㿪ʼ����*/
    if (max<a[i][j])
    {
        max=a[i][j] ;
        row=i ;
        column=j ;
    }
    printf ("max=%d\nrow=%d\ncolumn=%d\n",max,row,column) ;
    return 0;
}
