#include<stdio.h>
#define size 100

typedef struct{
  int number;
  char* name;
}student;

int main(void){
  int input;
  student park;
  park.name = "park";
  park.number = 12345;
  printf("The name is %s, and the number is %d.",park.name,park.number);
}