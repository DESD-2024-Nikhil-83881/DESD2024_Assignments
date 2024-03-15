#include<stdio.h>

int main(){
 int deptNo,empid;
   char dc;
     
	  printf("Enter a employee id :");

	    scanf("%d",&empid);
		   
		     printf("Enter a department No :");
                  
				   scanf("%d",&deptNo);
				      
					   printf("Enter a designation code :");
					      
						  getchar();
                               
							   dc=getchar();
       
 switch(deptNo)
             {
               case 10:
			           printf("Employee with employee id %d is working in marketing department ",empid );
                
				break;


               case 20: 
			            printf("Employee with employee id %d is working in management department ",empid );
                
				break;


			   case 30:  
			           printf("Employee with employee id %d is working in sales department ",empid );
                
				break;


               case 40: 
			          printf("Employee with employee id %d is working in Designing department ",empid );
                 
				 break;
                 

			 }


			 switch(dc){

			    case 'm':
			           printf("as a manager." );
break;

				case 'S':
                       printf("as a Supervisor." );

break;
				case 's':
                       printf("as a Security Officer." );
break;

				case 'c':
                       printf("as a Cleark." );

break;
}
	   
return 0;

}

