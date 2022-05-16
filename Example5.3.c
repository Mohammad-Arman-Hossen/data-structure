#include<stdio.h>
#include<stdlib.h>
// example 5.3 , page 5.6
// ALG 11 part
struct node{

    int data;
    struct node *next;

};
int main()
{

    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    struct node *d = NULL;

    a = (struct node*)malloc(sizeof(struct node));
    b= (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));
    a -> data = 88;
    b ->data = 74;
    c -> data = 93;
    d ->data = 82;
    a ->next = b;
    b ->next = c;
    c -> next = d;
    d -> next = NULL;
    while(a != NULL)
    {
        printf("%d ->",a->data);
        a = a->next;
    }
    printf(" NULL");
    return 0;
}
