 #include<stdio.h>
  int main(){
       int num;
		  int j=0;
		  int i,res;
		     printf("Enter the number : ");
			   scanf("%d",&num);
              int mul;
			   i=num;
      while(i != 0){            
             res = num%i; 
       if(res == 0){ 
	   	    j++;
			mul=j*i;
             
			if(num==mul)
			printf("\n%d * %d = %d",j,i,mul);
		}
		i--;
		
}
printf("\n");

return 0;
  }
