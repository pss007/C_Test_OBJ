#include <stdio.h>
int main()
{
    char string[80],c ;
    int i,num=0,word=0 ;
    gets (string) ;
    for (i=0;(c=string[i])!='\0';i++)         /*�ַ����ǽ����ַ�ѭ������*/
        {
            if (c==' ') word=0 ;
            else if (word==0)                 /*���wordԭֵ����һ״ֵ̬Ϊ0ʱִ�����渴�����*/
          {
             word=1 ;                         /*ע�⣻������Ҫ���帳ֵ�͵��ڼ���=="�͡�="*/
             num=num+1 ;
          }
        }
    printf ("����%d�����ʡ�",num) ;
    return 0 ;
}
