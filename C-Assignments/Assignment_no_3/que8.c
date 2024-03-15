#include<stdio.h>
  int main(){
       int num;
	      printf("Enter the number :");
		    scanf("%d",&num);
			int i=2;
  while(i<=num){

     if(num%i==0 && i>1 && i%i==0|| i==2){

	  printf("The factors of %d is %d\n",num,i);

	  }
	  i++;
}
 return 0;}
