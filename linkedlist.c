#include <stdlib.h>
#include <stdio.h>

struct node{
  int i;
  struct node* next;
};

void print_list(struct node* node){
  if (node == NULL){
    printf("[  ]\n");
    return;
  }
  printf("[ ");
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

struct node* remove_node(struct node* front, int data){
  struct node* leader = front->next;
  struct node* follower = front;
  while (leader != NULL){
    if (leader->i == data){
      follower->next = leader->next;
      free(leader);
      return front;
    }
    follower = leader;
    leader = leader->next;
  }
  return front;
} 
