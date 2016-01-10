#include <stdlib.h>
#include <stdio.h>

int main(){
  int year = 1901;
  int yearCount = 100;
  int x;
  int z;
  int sundays = 0 ;
  int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day = 2;
  int i;
  int daysInYear = 0;
  int daysOccured = 0;
  int month = 1;
  for(x = 0 ; x < yearCount ; x++){
    printf("YEAR %d\n", year);
    daysInYear = 0;
    month = 1;
    for(i = 0 ; i < 12 ; i++){
      daysInYear += daysInMonths[i];
    }
    for(i = 0 ; i < 12 ; i++){
      printf("MONTH %d\n", month);
      for(z = 0 ; z < daysInMonths[i] ; z++){
	if(day == 8){
	  day -= 7;
	}
	printf("%d\n", day);
	if(z == 0 && day == 7){
	  printf("Sunday on the first\n");
	  sundays += 1;
	}
	day += 1;
	daysOccured += 1;
      }
      month += 1;
      printf("\n");
    }
    year += 1;
    if (year % 4 == 0){
      daysInMonths[1] = 29;
      printf("%d is a leap year\n", year);
    }
    else{
      daysInMonths[1] = 28;
    }
    if(year % 100 == 0){
      if(year % 400 != 0){
	daysInMonths[1] = 28;
      }
    }
  }
  printf("total days = %d\n", daysOccured);
  printf("\n\nThe total number of sundays that occured on the first was %d\n", sundays);

  return 0;
}
