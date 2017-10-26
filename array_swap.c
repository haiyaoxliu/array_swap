#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a[10];
  int b[10];
  int i;
  int *p;
  srand(time(NULL));
  //set and print a
  for(i = 0; i < 9; i++) {
    a[i] = rand();
    printf("a[%d] = %d\n",i,a[i]);
  }
  a[9] = 0;
  printf("a[9] = %d\n\n",a[9]);
  //set and print b
  for(i = 0; i < 10; i++) {
    p = &a[9-i];
    b[i] = *p;
    printf("b[%d] = %d\n",i,b[i]);
  }
}
