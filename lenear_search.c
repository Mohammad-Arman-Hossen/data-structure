#include<stdio.h>
int main()
{
    int a[10]={1,2,4,5,6,2,7,3,7,1,9};
    int item;
    int i, count = 0;
    printf("Enter a element for search in array: ");
    scanf("%d",&item);
    printf("Search element is = %d \n ",item);

    for(i=0; i<=10; i++)
    {
        if(a[i]==item)
        {
            printf("%d is pound at location %d \n",item, i+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("this item is not pound \n");
    }else
    {
        printf("this item %d is pound %d times  \n",item, count);
    }

    return 0;
}
