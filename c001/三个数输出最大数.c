#include <stdio.h>
int main()
{
    int max (int x,int y,int z);
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    d=max(a,b,c);
    printf("max=%d\n",d);
    return 0;
}
int max (int x,int y,int z)
{
    int s;
    if(x>y,x>z)s=x;
    if(x<y,y>z)s=y;
    if(x<y,y<z)s=z;
    return(s);
}
