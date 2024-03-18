#include<stdio.h>

  int main(){
		int base,index;
	printf("Enter the base and index : ");
	scanf("%d %d",&base,&index);
       int power = 1;
  for(int i =1; i<=index; i++){
			

			power*=base;
}
  printf("The power is %d\n",power);
 
return 0;
  }
