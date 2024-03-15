#include<stdio.h>

int main(){

int year;

printf("Enter the no :");
scanf("%d",&year);


if(year%4==0 && year%400 == 0){

printf("The %d is leap year and days are 366\n",year);

}else if(year%100==0){
printf("The %d is not a leap year and the days are 365\n",year);
}

else 
printf("Not a leap year",year);
return 0;
}
