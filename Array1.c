#include<stdio.h>
#include<conio.h>
//this program is how to input array value and print in a array
int main()
 {
     int a[50],size,i;
     printf("Enter the name of size: ");
     scanf("%d",&size);
     printf("Enter the element of  Array: ");
     for(i=0; i<size; i++)
     {
         scanf("%d",&a[i]);
     }
     printf("This element is : ");
     for(i=0; i<size; i++)
     {
         printf("%d ",a[i]);
     }
     return 0;
 }
