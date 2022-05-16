#include<stdio.h>
#include<stdlib.h>

int searchInlinklist(struct node *head, int value);

struct node *createlist(int a[], int s);
struct node
{
    int data;
    struct node *next;

};
int main()
{
    int a[ ] = {10, 20, 30, 50, 60, 70};
    struct node *head  = NULL;
    struct node *head  curent = head;
   current = searchlink(struct node *head, 50);
    printf("%d is found \n",head ->data);

   head =  createlist(a, 6);
    while (head != NULL)
           {
               printf("%d -> ",head->data);
                head = head ->next;
           }
    return 0;
}
int searchInlinklist(struct mode *head, int value)
{
    int index = 1;
    while(head != NULL)
    {
        if(head ->data == value)
        {
             return index;
        }
        index ++ ;
        head = head -> next;
    }
    return -1;

}


struct node *createlist(int a[], int s)
{
    struct node *head=NULL, *temp = NULL, *current = NULL;
  //  temp = (struct node*)malloc(sizeof(struct node));
   // head = (struct node*)malloc(sizeof(struct node));
    //current= (struct node*)malloc(sizeof(struct node));
    int i;
    for(i =0; i<s; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> data = a[i];
        temp -> next = NULL;
      //  printf("%d \n", a[i]);
      if(head == NULL)
      {
          head = temp;
          current = temp;
      }else
      {
          current -> next = temp;
          current = current ->next;
      }

    }
    return head;

}
