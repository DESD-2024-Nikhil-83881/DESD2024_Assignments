#include<stdio.h>
int main(){

int x,y,z;
 x = 0;
 y = 1;
int i,n;

printf("Enter the value : ");
scanf("%d",&n);

printf("%d\t",x);
printf("%d",y);

printf("\t");

for(i=0;i<n;i++){

z = x + y;
printf("%d",z);
printf("\t");
x=y;
y=z;
}

}
