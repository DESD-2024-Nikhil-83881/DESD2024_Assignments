#include<stdio.h>

int main(){
      
     int num1;
	 int num2,numer,denom;
	 int rem=0;
	 int gcd;
	 int quo=1;
	 

	printf("Enter the num1 and num2 :");
	scanf("%d %d",&num1,&num2);

if(num1>num2){
      numer= num1;
	  denom = num2;

}
else {
      numer = num2;
	  denom = num1;

}

rem = numer%denom;

 	 while(rem!=0){
       
        numer = denom;
		denom = rem;
		rem = numer%denom;
		}
		 
		printf("The gcd of %d and %d is %d",num1,num2,denom);

return 0;
}
