#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int max=0;

    printf("请输入十个数\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }
    printf("十个数中最大的数为%d\n",max);
    return 0;
}

