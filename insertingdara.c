#include<stdio.h>

//inserting data by swapping


int main()
{
    int a[7] = { 1, 4, 6, 2, 7,2,5 };
    int  i, num, size, pos;
    printf(" Enter your data : ");  //>>searching data
    scanf("%d",  &num);
    size = sizeof(a);
    printf("Enter your array size : %d \n",size);
  //  scanf("%d", &sizeof(a));
    printf(" Enter your position: ");
    scanf("%d", &pos);
   /* if(pos <= 0 ||  pos < size + 1)
    {
        printf(" wrong position ");

    }
     else
     { */
    for( i  = size-1; i >= pos -1; i--)
         {
             a[i+1] = a[i];
         }
    a[pos - 1] = num;
    size ++;
    for(i=0; i<= size; i++)
         {
             printf("  %d ", a[i]);
         }
}


