#include <stdlib.h>
#include <stdio.h>
#include "header.h"

struct node{
  int i;
  struct node * next;
}

int main(){
  printf("Printing Empty List:\n");
  //struct node * start = insert_front(malloc(12), 
