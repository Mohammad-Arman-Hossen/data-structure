#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// this is linked list create program in c


struct node{  // node structure create
    char data[50];
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
     a->data = "arman ";   // variable data assing
     b->data = { 'a', 'c','\0' };
     c->data = { 'a', 'b', 'd', '\0' };
     a->next = b;  // link node to node
     b->next = c;
     c->next = NULL;
     while(a != NULL)    // check data link list
     {
         printf("%s  -> ", a-> data);
         a = a->next;
     }
     return 0;

}
