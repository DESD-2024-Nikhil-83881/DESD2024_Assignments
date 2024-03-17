#include<stdio.h>
  int main(){
       int num;
	      int i=1;
		     printf("Enter the number : ");
			   scanf("%d",&num);
      while(i<=num){            
          
       if(num % i == 0){

        printf("%d,",i);

		}

		i++;
}
printf("\n");

return 0;
  }
