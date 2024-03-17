#include<stdio.h>

   int main(){
       int num,rem,cube=0;

	     printf("Enter the number : ");
		    scanf("%d",&num);
int temp = num;

    while(num!=0){
     
	  rem  = num%10;
	  cube += (rem*rem*rem);
	  num = num/10;
	}
if(temp==cube){
	printf("The number %d is an amstrong number ",cube);
}

else {
    
	printf("The number is not an amstrong number ");

}
return 0;		
}
