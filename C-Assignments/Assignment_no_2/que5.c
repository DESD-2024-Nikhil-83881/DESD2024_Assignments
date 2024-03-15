#include<stdio.h>

int main(){

int c;
int a;
int b;

printf("Enter the 1st no :");
scanf("%d",&a);

printf("Enter the 2nd no :");
scanf("%d",&b);

printf("Enter the 3rd no :");
scanf("%d",&c);


if(a>b){

printf("The max number is : %d \n", a);

}
else if(b>c){

printf("The max number is : %d \n", b);
}

else if(a<c){

printf("The max number is %d",c);
}
return 0;
}
