#include<stdio.h>
#include<conio.h>
int main()
{
    int a[8]={1,2,3,4,5,6,7,8,9};
    int n=8;
    int x =12;
    int left=0;
    int right = n-1;
    int mid;
    while(left<=right)
    {
        mid = (left + right)/2;
        if(a[mid]==x)
            {
                printf("this number present \n");
                return 0;
            }
        else if(a[mid]<x)
        {
            left = mid +1;
        }
        else // (a[mid] > x);
        {
            right = mid -1;
        }
    }
    printf("this number is not present");
}

