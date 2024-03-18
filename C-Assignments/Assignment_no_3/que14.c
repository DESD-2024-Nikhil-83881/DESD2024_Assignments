#include<stdio.h>

int main(){
	
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);
	  int i;
	  int flag;
for(int i=2; i<num/2;i++){
    if(num%i!=0)
    
	   flag = 1;
     break;
}
if(flag==1){

		 printf("The number is   prime number ");
}
		 else {
		   printf("The number is not prime number ");
}

	
return 0;
}
