#include <math.h>
#include <stdlib.h>
#include <stdio.h>
long double subject(int target);

int main(){
  long double answer;
  answer = subject(100);
  printf("%.0Lf\n", answer);
  return 0;
}


long double subject(int target){
  int i;
  long double total = (long double)target;
  for(i = (target - 1) ; i > 0 ; i--){
    total = total * (long double)i;
  }

  return total;
}
