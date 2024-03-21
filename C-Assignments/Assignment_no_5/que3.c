#include<stdio.h>
int accept_array(int arr[], int length);
int print_array(int arr[], int length);
int reverse_array(int arr[], int length);
int main()
{
	int arr[6];

printf("Enter the array elements :");
 	accept_array(arr, 6);

printf("before the reverse :");
	print_array(arr, 6);

	reverse_array(arr, 6);

printf("after the reverse :");
	print_array(arr, 6);
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
int reverse_array(int arr[], int length)
{
	int j;
	for(int i = 0, j=length - 1; i<j;  i++, j--){
		
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		
		}
}
