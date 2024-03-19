#include<stdio.h>
	int calculate(int, char, int);
		 
 		int flag;

	int main()
	{
		char choice;
		int num1,num2,result;
		char opr;

		printf("Enter the num1, opr and num2 : ");
		scanf("%d %c %d",&num1, &opr, &num2);
	 
	 result = calculate(num1, opr, num2);
	    
			printf("%d %c %d = %d",num1, opr, num2,result);

	
return 0;
	}
	 
	 int calculate(int num1, char opr, int num2)
		{
			int result;

				switch(opr)
					{
						case '+':
								result = num1 + num2;
								break;

						case '-':
								result = num1 - num2;
								break;

						case '*':
								result = num1 * num2;
								break;

						case '/':
								result = num1/num2;
								break;

				}
					return result;	
		}
