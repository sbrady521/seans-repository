#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  FILE * fPointer;
  fPointer = fopen("problem16num.txt", "w");
  fprintf(fPointer, "%.0f", pow(2,1000));
  fclose(fPointer);
  int total = 0;
  int c;
  fPointer = fopen("problem16num.txt", "r");
  while((c = fgetc(fPointer)) != EOF){
    c = c - '0';
    printf("Adding %d\n", c);
    total += c;
  }
  printf("The total is: %d\n", total);
  

  return 0;
}
