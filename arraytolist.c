#include<stdio.h>

void createlist(int a[], int s);
int main()
{
    int a = { 10, 20, 30};
    int s = 3;
    createlist(a,s);

};
void createlist(int a[], int s)
{
    int i;
    for(i =0; i<s; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("sum");
}
