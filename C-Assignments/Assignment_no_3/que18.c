#include<stdio.h>

	int main(){
          int num;

	 for(int i = 1; i<=30; i++)
	  {
        for(int j = 1; j<=30; j++)
		 {

            num = i*j;

			printf("%-4d",j*i);

		 }
		 printf("\t\n");


	  }
return 0;
	}
