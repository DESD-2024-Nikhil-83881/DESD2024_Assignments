#include<stdio.h>

int pal(int);
int rev = 0,rem;
   int main(){
       int num,a,b,c,d,res;
int temp = num;
	     printf("Enter the number : ");
		    scanf("%d",&num);

	d = num%10;
		num = num/10;
		
		c = num%10;
		num = num/10;

		b = num%10;
		num = num/10;

		a = num;
	
res = a + b + c + d;

	printf("%d +  %d + %d + %d = %d",d,c,b,a,res);

return 0;

	}
