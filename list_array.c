#include<stdio.h>
void create_list(int a[], int size);
int main()
{
    int a = {10, 20, 5};

    create_list( a, 3);

}
void create_list(int a[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d \n ",a[i]);
    }
}
