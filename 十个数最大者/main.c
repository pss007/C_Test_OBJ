#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int max=0;

    printf("������ʮ����\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }
    printf("ʮ������������Ϊ%d\n",max);
    return 0;
}

