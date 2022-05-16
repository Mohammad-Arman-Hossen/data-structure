#include<stdio.h>

int main()
{
    int a[10];
    int i;
    for(int i=0; i<10; i++)
    {
        a[i]=i;
    }
    printarray(a);
}
void  printarray(int a[])
{
    int i;
    for(i =0; i<10; i++)
    {
        printf("value in the array %d \n", a[i]);
    }
}
