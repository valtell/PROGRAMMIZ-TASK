#include <stdio.h>

 //This is a code that will print a desired month for a user when a user specifies the number of the month.ie.if it is the first,second or third month in the calendar


int main() {
int number;
printf("specify month by writing the number:");
scanf("%d", &number);
switch (number){

case 1:
printf("January");
break;

case 2:
printf("February");
break;

case 3:
printf("March");
break;

case 4:
printf("April");
break;

case 5:
printf("May");
break;

case 6:
printf("June");
break;

case 7:
printf("July");
break;

case 8:
printf("August");
break;

case 9:
printf("septemper");
break;

case 10:
printf("october");
break;

case 11:
printf("November");
break;

case 12:
printf("December");
break;

default:
printf("invalid input");
    
}


    return 0;
}
