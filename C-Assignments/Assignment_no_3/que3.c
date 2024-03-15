#include<stdio.h>

int pal(int);
int rev = 0,rem;
   int main(){
       int num,a,b,c,d,res;
int temp = num;
	     printf("Enter the number : ");
		    scanf("%d",&num);

	d = num%10;
		num = num/10;
		
		c = num%10;
		num = num/10;

		b = num%10;
		num = num/10;

		a = num;
	
res = a + b + c + d;

	printf("%d +  %d + %d + %d = %d",d,c,b,a,res);
	
	if(num!=0){
      rev = pal(num);}

	  printf("The reverse number is %d\n",rev);
if(temp==rev){ 

      printf("The number is palindrom ");
	

	}else{ 

		printf("The number is not a palindrome :");
		}
return 0;
   } 

   pal(int num){
            int temp=0;       
             rev=0,rem;

			    while(num!=0){
				 
				 rem = num%10;
    
	       rev = (rev*10) + rem;
        
		 num = num/10;
  
  }return rev;

}
