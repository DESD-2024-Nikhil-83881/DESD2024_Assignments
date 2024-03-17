#include<stdio.h>

int main(){
    int num, fact=1,i=1;

   printf("Enter the number :");
   scanf("%d",&num);

   while(i<=num){
      
	   fact*=i;

	   i++;
   }


   printf("The factorial of number %d is : %d",num, fact);

return 0;
}
