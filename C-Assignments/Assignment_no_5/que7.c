#include<stdio.h>
void array_sort(int arr[], int length);
void accept_array(int arr[], int length);			
void print_array(int arr[], int length);			
int main()
{
	int arr[6];

accept_array(arr, 6);	
printf("after sort array :	");			
array_sort(arr, 6);	
print_array(arr, 6);	

return 0;
}

void accept_array(int arr[], int length)		
{
	printf("Enter array elements: ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
}
void array_sort(int arr[], int length)
{ 
int temp=0;
	for(int i = 0; i < length-1; i++)
	{
		for(int j = i+1; j<length; j++)
		{

		if(arr[i] > arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
}
		}
	}

}

void print_array(int arr[], int length)		
{
	printf("Array : ");
	for(int  i = 0 ; i < length ; i++)
		printf("%-4d", arr[i]);
	printf("\n");
}
