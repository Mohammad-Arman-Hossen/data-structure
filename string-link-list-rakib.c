#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  char data;
  struct node* next;
};

struct node* create(struct node* head, const char* data) {
  struct node* newnode, * temp;
  newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->next = NULL;
  if (head == NULL) {
    head = newnode;
    temp = newnode;
  }
  else {
    temp->next = newnode;
    temp = temp->next;
  }
  temp->next = NULL;
  return head;
}

struct node* display(struct node* head) {
  struct node* temp;
  temp = head;
  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("NULL");
  return head;
}

int main() {
  struct node* head;
  head = NULL;
  int size, i;
  char str[5];
  printf("\nSize of linked list you want: ");
  scanf("%d", &size);
  for (i = 0; i < size; i++) {
    gets(str);
    head = create(head, str);
  }
  display(head);
  return 0;
}
