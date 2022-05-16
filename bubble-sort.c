#include<stdio.h>
int main()
{
    int a[10]={1,2,4,3,6,5,7};
    int i,j,size=7;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1-i; j++)
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("The after sorting: \n");
    for(i=0; i<size;i++)
    {
        printf(" %d ",a[i]);
    }


    return 0;
}
