#include<stdio.h>
int accept_array(int arr[], int length);
int print_array(int arr[],  int length);
int main()
{
	int arr[10];
	printf("Enter the array elements :");

		accept_array(arr, 10);

		print_array(arr, 10);

		rev_array(arr);
return 0;
}

int accept_array(int arr[], int length)
{

	for(int i = 0; i < 5; i++)
    {
       printf("arr[%d] : ", i);
	   scanf("%d", &arr[i]);
	}

}

int print_array(int arr[], int length)
{
	 printf("array : ");
      for(int i = 0; i < 5; i++)
	  {
         printf("%-4d",arr[i]);

	  }


}

int rev_array(nt arr[], int length)
{
	for(int i = 6; i>length; i--)
	{
		printf("%-4d",arr[i]);

	}


}







