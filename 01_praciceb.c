#include<stdio.h>

int main(){
  int length,breath;
  printf("what is the lenth of the rectangle\n");
  scanf("%d", &length);
  
  printf("what is th breath of the rectangle\n");
  scanf("%d", &breath );

  printf("the area of your rectangle is %d",length*breath);
  return 0;
}