#include<stdio.h>

int main(){

       int month,year;
	      printf("Enter the month :");
		     scanf("%d",&month);

			   printf("Enter the year :");
			      scanf("%d",&year);
	    
    if(month<=12){
		if(month==1||month==3||month==5||month==7||month==8 || month==10 || month==12)

           printf("The number of days are 31");

		        else if(month==2)
					if((year%100!=0 && year%4 == 0) || year%400 == 0)

				     	printf("The number of days are 29");

				     else
						 printf("The number of days are 28");



             else
                 printf("The number of days are 30");
}
return 0;
}
