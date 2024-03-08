#include<stdio.h>

int main(){

int a,b,ans;

printf("Enter first no :\n");
scanf("%d",&a);

printf("Enter the second no :\n");
scanf("%d",&b);

ans = a + b;
printf("The sum is %d\n",ans);

ans = a - b;
printf("The difference is %d\n",ans);

ans = a*b;
printf("The product is %d",ans);

return 0;

}
