#include<stdio.h>
int accept_array(int arr[], int length);
int print_array(int arr[], int length);
int find_max(int arr[], int length);
int main()
{
	int arr[6];

printf("Enter the array elements :");
 	accept_array(arr, 6);

printf("The array elements are :");
	print_array(arr, 6);

printf("Max element of array : %d\n",find_max(arr, 6));
return 0;
}

int accept_array(int arr[], int length)
{
	for(int i = 0; i<length; i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
		}
}
int print_array(int arr[], int length)
{
	for(int i = 0; i<length; i++){
		
		printf("%-4d",arr[i]);
		
		}
}
int find_max(int arr[], int length)
{
	int max = 0;
	for(int i = 0; i<length ; i++){
		
		if(arr[i] > max)
			max = arr[i];
		
		}
		return max;
}
