#include <stdlib.h>
#include <stdio.h>

struct node{
  int i;
  struct node* next;
};

void print_list(struct node* node){
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
  struct node* ph = node->next;
  /*while (ph != NULL){
    free(node);
    ph = ph->next;
  }
  return ph;*/
  free(node);
  free_list(ph);
  return ph;
}
