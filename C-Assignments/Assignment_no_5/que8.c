#include<stdio.h>
int arr_search(int arr[],int length, int key );
int arr_revsearch(int arr[],int length, int key);
 int main(void){
 int key,ret,length;
   int arr[6] = {11,44,33,44,55,66};
    
	printf("Enter the key to be searched : ");
    scanf("%d",&key);

	ret = arr_revsearch(arr ,6,key);

if(ret!=-1)
	printf("The key is found at index %d", ret);

	else
	   printf("The key is not found ");

return 0;
 }

/* int arr_search(int arr[],int length,int key){
    
      for(int i=0; i<length; i++){
             if(arr[i]==key)
			   return i;
	  }             
       return -1;
 }*/

 int arr_revsearch(int arr[], int length,int key){
                   

              for(int i=length-1 ; i>=0; i--){
                             
					if(arr[i]==key)

                         return i;
						
			}
return -1;
 }
