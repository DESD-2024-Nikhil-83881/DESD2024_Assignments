#include<stdio.h>

int main(){

char ch;

printf("Enter a character : ");
  scanf("%c",&ch);

    if(ch>=65  && ch<=90 || ch>=97 && ch<=122){

        if(ch >= 65 && ch <= 90)

	      printf("The %c character is uppercase",ch);
              
             if(ch>=97 && ch<=122)
               
                printf("The character %c is lowercase ",ch);

                else
			        printf("The character %c is ALPHABET",ch);

}
    else 
	    if(ch>=48 && ch<=57)
		   
		   printf("The character %c is DIGIT",ch);

		     else 
			     if(ch==32||ch==9||ch==13||ch==10)
				    
					printf("The character %c is for SPACE ",ch);
                  
				       else
                           printf("The character %c is not listed above ",ch);


                       
							  
                                            
return 0;

}

