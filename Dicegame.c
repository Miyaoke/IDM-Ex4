#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,d1,d2;
  char name[10];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello , %s!\n",name);
  printf("Rolling the dice...\n");
  srand(time(NULL));
  d1=rand() % 6 + 1;
  printf("Die 1: %d\n",d1);
  d2=rand() % 6 + 1;
  printf("Die 2: %d\n",d2);
  printf("Total value: %d\n",d1+d2);

  return 0;
}

