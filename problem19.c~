#include <stdlib.h>
#include <stdio.h>

int main(){
  int year = 1900;
  int yearCount = 2;
  int x;
  if(year % 4 == 0){
    int daysInMonths[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  }
  else{
    int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  }
  int day = 1;
  int i;
  int daysInYear = 0;
  for(x = 0 ; x < yearCount ; x++){
    int daysOccured = 0;
    for(i = 0 ; i < 12 ; i++){
      daysInYear += daysInMoth[i];
    }
    for(i = 0 ; i < daysInYear ; i++){
      if(day == 8){
	day -= 7;
      }
      day += 1;
      daysOccured += 1;
    
    }
  }
  printf("%d\n", daysOccured);

  return 0;
}
