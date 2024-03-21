#include<stdio.h>
float average_marks(float arr[], int length);

int main()
{   float arr[5];
//	accept_array(arr, 4);

float avg;
int length;
float res;
	printf("Enter the marks : ");
	for(int i = 0; i<5; i++){
	scanf("%f", &arr[i]);}

	res = average_marks(arr, 5);

	printf("The avg of marks is %f\n",res);
return 0;
}

float average_marks(float arr[], int length)
{
	float total;
	float avg;
	for(int i = 0; i<length; i++)
	{
		
		total += arr[i];
	
}
	avg = total/5;

	return avg;
}

