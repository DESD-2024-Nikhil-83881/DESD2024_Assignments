#include<stdio.h>
	int fun(int);
	int main()
	{
		int a,b,c,num;
         printf("Enter the value :");
		 scanf("%d",&num);

		 fun(num);
	return 0;
	}

	int fun(int num)
		{
			int a = 0;
			int b = 1;
			int c;

			for(int i = 0;i<num;i++)
				{
					c = a + b;

				printf("%-4d",c);

				a = b;
				b = c;

				}

		}
