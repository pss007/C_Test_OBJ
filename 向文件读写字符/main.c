#include"stdio.h"
#include<stdlib.h>
int main()
{
    FILE*fp ;
    char ch,filename[10] ;
    printf ("���������õ��ļ�����") ;
    scanf ("%s",filename) ;
    if ((fp=fopen(filename,"w"))==NULL) ;    //�������ļ���ʹfpָ����ļ�
    {
        printf ("�޷��򿪴��ļ�\n") ;
        exit(0) ;                             //��ֹ����
    }
    ch=getchar() ;      //���������������Ļس���
    printf ("������һ��׼���洢�����̵��ַ�������#��������") ;
    ch=getchar() ;           //���ռ�������ĵ�һ���ַ�
    while(ch!='#') ;             //������#ʱ����ѭ��
    {
        fputc(ch,fp) ;        //������ļ����һ���ַ�
        putchar(ch) ;          //��������ַ���ʾ����Ļ��
        ch=getchar();          //�ٽ��մӼ���������ַ�
    }
    fclose(fp) ;             //�ر��ļ�
    putchar(10) ;            //����Ļ���һ�����з� 10�ǻ��з���ASC||��
    return 0 ;
}
