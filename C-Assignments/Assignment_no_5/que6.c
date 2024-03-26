#include <stdio.h>  
  
int delete_duplicate_element( int array[], int size)  
{   
    if (size == 0 || size == 1) {
        return size;
    }
             
    int new_array[size];   
      
    int index, new_size = 0;  
     
    for (index = 0; index < size - 1; index++)  
    {  
        if (array[index] != array[index + 1]){  
            new_array[new_size] = array[index];
            new_size++;
        } 
    }
        
    new_array[new_size] = array[size - 1];  
    new_size++;
    
    for (index = 0; index < new_size; index++)  
    {  
    
        array[index] = new_array[index];  
    }            
    return new_size;     
}  
  
int main ()  
{  
    int size;  
    printf (" Enter the Array Size :- \n");  
    scanf (" %d", &size);  
      
    int array[size], index;  
    printf (" Enter the elements:- \n ");  
   
    for ( index = 0; index < size; index++)  
    {  
        scanf (" %d", &array[index]);  
    }   
    printf (" \n Original Array :-  \n");  
    for ( index = 0; index < size; index++)  
    {  
        printf (" %d", array[index]);  
    }  
    size = delete_duplicate_element (array, size);  
     
    printf (" \n New Array :- \n ");  
    for ( index = 0; index < size; index++)  
    {  
        printf (" %d", array[index]);  
    }           
    return 0;     
}

