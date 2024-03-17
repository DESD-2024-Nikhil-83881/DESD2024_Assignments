#include<stdio.h>

   int main(){
       int num,rem,rev=0;

	     printf("Enter the number : ");
		    scanf("%d",&num);

   int temp = num;

    while(num!=0){
     
	  rem  = num%10;
	  rev = (rev * 10) + rem;
	  num = num/10;
	}

	printf("The reverse number is : %d\n",rev);
   
   if(temp == rev){

       printf("The number is a palindrom ");
  } else{
       printf("The number is not a palindrom");
}
return 0;		
}
