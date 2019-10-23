#include <stdlib.h>
#include <stdio.h>
#include "header.h"

struct node{
  int i;
  struct node * next;
}

int main(){
  printf("Printing Empty List:\n[  ]");
  //print adding stuff
  struct node * start = insert_front(malloc(sizeof(struct node)), 9);
  start = insert_front(start, 8);
  
