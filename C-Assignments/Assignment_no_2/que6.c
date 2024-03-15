#include<stdio.h>
int main()
{
int num,rem,rev=0;

printf("Enter the no :");
scanf("%d",&num);

int temp=num;

while(num!=0){

rem = num % 10;
rev = (rev * 10) + rem;
num = num/10;

}
printf("Reversed value is %d ",rev);

if(temp == rev){

printf("The no %d is Palindrom\n",temp);

}else{

printf("%d is Not palindrom\n",num);
}
return 0;

}
