#include<stdio.h>

int main(){
    int num,res;
	printf("Enter the number :");
	scanf("%d",&num);
int i;
	for(int i=1; i<=10; i++){

	    res=num*i;

printf("%d * %d = %d\n",num,i,res);
}
return 0;
}
