#include<stdio.h>
 int num_times(int ,char);
	int main()
	{
		char ch = 'C';
		int num,i,j;
		
		printf("Enter value :");
		scanf("%d",&num);

     int  res = num_times(num, ch);

return 0;
	}

	int num_times(int num,char ch)
		{
           
		   for(int i = 0; i<=num; i++){
              
                printf("%c",ch);

		   }
		return ch;	

		}
