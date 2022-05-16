#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
// this is linked list create program in c
// and this is also about malloc, calloc program

struct node{  // node structure create
    char  data[50];
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
    insert(a, "Testb");
    insert(b, "asdffa");
    insert(c, "Abc123");

     /*
     a->data = 'A' ;   // variable data assing
     b->data = {arman} ;
     c->data = {'sazib'} ;
     */
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
