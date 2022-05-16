#include<stdio.h>

int main()
{
    int a[10] = {0,1,2,4,5,6,7,8,9,10};
    int size = 10;
    int p = 4;
    int num = 3;
    int i;
    for(i=0; i <=10; i++)
    {
        printf(" %d ",a[i]);
    }
    // data input
    //printf("\n Enter your data for inserting: ");
    //scanf("%d",&num);
    //input pos
     //printf("Enter your position for inserting: ");
    //scanf("%d",&p);


     //printf("Enter your data for inserting: ");
   // scanf("%d",&num);

    for(i=size-1; i>=p-1; i--)
    {
        a[i+1] = a[i];
    }
    a[p-1] = num;
    size++;
    printf("\n after insert array \n");
    for(i=0; i <=10; i++)
    {
        printf(" %d ",a[i]);
    }
}
