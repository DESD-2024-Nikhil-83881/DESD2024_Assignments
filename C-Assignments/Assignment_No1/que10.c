#include<limits.h>
#include<stdio.h>
# include <math.h>
int main(){

float s,a,b,c;
float area;
int perim;
a = 3;
b = 4;
c = 5;

s = (a + b + c)/2.0;

perim = a+b+c;

printf("The perimeter of triangle is %d",perim);

area = sqrt(s*(s-a)*(s-b)*(s-c));

printf("The area of triangle is %f",s,area);
return 0;
}
