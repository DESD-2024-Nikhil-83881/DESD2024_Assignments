#include<stdio.h>

int factorial(int);

int main(){

	int num;
		printf("Enter the number : ");
		scanf("%d",&num);
	
int	fact = factorial(num);
  		printf("The factorial of %d is %d ",num,fact);
		

return 0;
}

int factorial(int num)
{
int fact = 1;
	for(int i = 1; i <= num; i++)
{		
		fact*=i;
		}
   return fact;
}
