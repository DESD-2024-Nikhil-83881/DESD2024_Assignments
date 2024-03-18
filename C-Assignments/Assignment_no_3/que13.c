#include<stdio.h>

int main(){
		
	int a,b,c,num;
		
	printf("Enter the value : ");
	scanf("%d",&num);

		a = 0;
		b = 1;

	for(int i=0; i<num; i++)
{
	     c = a + b;

	printf("%d ", c);
a = b;
b = c;
}
return 0;
	}
