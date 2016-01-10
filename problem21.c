#include <stdlib.h>
#include <stdio.h>
int d(int target);

int main(){
  int a;
  int b;
  int test;
  int runningTotal = 0;
  for(a = 2 ; a < 10000 ; a++){
    b = d(a);
    printf("d(a) = d(%d) = %d\n", a, b);
    test = d(b);
    printf("d(b) = d(%d) = %d\n", b, test);
    if(test == a && a != b){
      printf("%d and %d are an amicable pair\n", a, b);
      runningTotal += a;
      printf("adding %d, the total is now %d", a, runningTotal);
    }
    printf("\n");
  }
  printf("\nThe overall total is %d\n", runningTotal);
  return 0;
}


int d(int target){
  int i;
  int total = 1;
  for(i = 2 ; i < (target/2) + 1 ; i++){
    if(target % i == 0){
      total += i;
    }
  }
  return total;

}
