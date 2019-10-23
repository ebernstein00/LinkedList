#include <stdlib.h>
#include <stdio.h>

struct node{
  int i;
  struct node* next;
};

void print_list(struct node* node){
  if (node == NULL){
    printf("[  ]\n");
    break;
  }
  printf("Printing List:\n[ ");
  while(node->next != NULL){
    printf("%d ", node->i);
    node = node->next;
  }
  printf("]\n");
}

struct node* insert_front(struct node* node, int x){
  //struct node front;
  struct node* ptr = malloc(sizeof(struct node));//&front;
  ptr->i = x;
  ptr->next = node;
  return ptr;
}

struct node* free_list(struct node* node){
  struct node* ph;
  while (ph != NULL){
    ph = node->next;
    free(node);
    node = ph;
  }
  return ph;
  /*free(node);
  free_list(ph);
  return ph;*/
}
