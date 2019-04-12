#include <stdio.h>

void sub1();
void sub2();
void sub3(){
  printf("sub3!!\n");
  printf("Hello World!\n");
}
void sub4();
  
int main() {
  sub1();
  sub2();
  sub3();
  sub4();
}
