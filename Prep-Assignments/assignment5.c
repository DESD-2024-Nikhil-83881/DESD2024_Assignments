#include<stdio.h>
int main(){

char n;

printf("enter no :");
scanf("%c",&n);
if(n>=65&&n<=90){

printf("Uppercase");

}else if(n>=97&&n<=122){


printf("lowercase");

}else if(n>= 48 && n<= 57)
printf("other no  :");

else
printf("Symbol");

return 0;

}

