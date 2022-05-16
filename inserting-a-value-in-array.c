#include<stdio.h>
int main()
{
    int a[20],size,i,num,pos;
    printf("Enter your Array size: ");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is \n");
    for(i=0; i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n Enter your value:  \n ");
    scanf("%d",&num);
    printf("Enter your position :  \n  ");
    scanf("%d",&pos);
    for(i=size-1; i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("The after inserting: \n");
    for(i=0; i<size;i++)
    {
        printf(" %d ",a[i]);
    }

}
