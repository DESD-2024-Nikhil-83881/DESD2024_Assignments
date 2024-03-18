#include<stdio.h>
int power(int , int);
	int main(){
		int base,index;

		printf("Enter the base and index: ");
		scanf("%d %d",&base,&index);

	int	p = power(base,index);
    	
		printf("The power of %d and %d is %d",base,index,p);
	 
return 0;
	}

	int power(int base, int index)
	 {
         int p = 1;
        
		for(int i=1; i<=index; i++){
             
			 p*=base;

		}
		return p;

	 }
