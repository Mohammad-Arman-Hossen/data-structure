#include<stdio.h>
int main()
{
    int a[10]= {1,2,3,5,6,7,8,9,10};
    int n=10;     //n is size of array
    int x; // x is searching element
    int i;
    printf("Enter a element for search in array: ");
    scanf("%d",&x);
    printf("Search element is = %d \n ",x);
    for(i=0; i<n; i++)
        {
        if(a[i]== x)
        {
            printf("%d value is pound \n",x);
            break;
        }
       }
    if(i==n)
        printf("%d vlaue is not pound \n",x);
    return 0;
}
