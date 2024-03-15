#include<stdio.h>
   int main(){
       
	   int num,n;    
	long fact = 1;

	printf("Enter the number : ");
scanf("%d",&n);

if(n<0){

printf("No factorial");
}

else{
while (n>1)
{
     fact*=n;
       n--; 


	   }
     printf("Factorial of %d is  %ld ",n,fact);          
   }
   }
