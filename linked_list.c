#include<stdio.h>
#include<stdlib.h>
// this is linked list create program in c


struct node{  // node structure create
    int data;
    struct node *next;
};

int main()
{
    struct node *a=NULL; // structure variable
    struct node *b= NULL;
    struct node *c=NULL;
    a=(struct node*)malloc(sizeof(struct node)); // memory allocation
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
     a->data = 10;   // variable data assing
     b->data = 20;
     c->data = 30;
     a->next = b;  // link node to node
     b->next = c;
     c->next = NULL;
     while(a != NULL)    // check data link list
     {
         printf("%d  -> ", a-> data);
         a = a->next;
     }
     return 0;

}
