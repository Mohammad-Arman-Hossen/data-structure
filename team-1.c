#include<stdio.h>
int main()
{
    int n,i,a,b,c,count=0;
    printf("%d",&a);
    for(i=0; i<=n; i++)
    {
        scanf("%d %d %d \n",&a,&b,&c);
        if(a+b+c>=2)
            count ++;
    }
    printf("%d",count);

}
