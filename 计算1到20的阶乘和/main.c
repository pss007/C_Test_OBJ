#include <stdio.h>
int main()
{
    int i,j=1,t=1,s=0 ;
    for (i=1;i<=20;i++)
    {
        while (j<=i)
        {
            t=j*t ;
            j++ ;
        }
        s=s+t ;
    }
    printf ("s=%d",s) ;
    return 0 ;
}




/*��һ��for�����㷨
#include <stdio.h>
int main()
{
   int i,s=0,t=1 ;
   for (i=1;i<=20;i++)
   {
       t=i*t ;
       s=s+t ;
   }
   printf ("s=%d",s) ;
    return 0 ;
}*/



/*����for�����㷨
#include <stdio.h>
int main()
{
   long int i,j,s=0,t=1 ;
   for (i=1;i<=20;i++)
   {
       for (j=1,t=1;j<=i;j++) ����Ҫ���һ������t=1 ʹ�ڶ���for���ÿ��ѭ��t�ظ���ֵ1 ����ÿ��ѭ��tֵ���� �������
       t=j*t ;
       s=s+t ;
   }
   printf ("s=%ld",s) ;
    return 0 ;
}
*/
