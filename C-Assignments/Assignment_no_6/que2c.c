#include<stdio.h>
#include<string.h>
char *str_cat(char *dest,const char *src);
int main(void){
     
       char str1[20];
	   char str2[20];

	   printf("Enter the string1 : ");
	   scanf("%s",str1);

	   printf("Enter the string 2 :");
	   scanf("%s",str2);

	   printf("Before strcat : str1 = %s, str2 = %s\n",str1,str2);

	  // strcat(str1,str2);
       str_cat(str2, str1);
	   printf("After strcat :str2 = %s\n",str2);

return 0;
}

char *str_cat(char *dest,const char *src)
 {

     int i= 0;
	  while(dest[i] != '\0')
        i++;

	for(int j = 0; src[j] != '\0'; j++)
          
		   dest[i++] = src[j];

		   dest[i] = '\0';

		   return dest;

 }
