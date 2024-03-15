#include<stdio.h>

int main(){

        int c1,c2;
		     printf("Enter the X co-ordinate :");
			      scanf("%d",&c1);
                         
						 printf("Enter the Y co-ordinate :");
						     scanf("%d",&c2);
							     
								 if(c1>0 && c2>0)
								       printf("The co-ordinates(%d,%d) lies on 1st quadrant\n",c1,c2);
									       
										   else if(c1<0 && c2>0)
					                           printf("The co-ordinates(%d,%d) lies on 2nd quadrant\n",c1,c2);
					       
               else if(c1<0 && c2<0)
                         printf("The co-ordinates(%d,%d) lies on 3rd quadrant\n",c1,c2);

	else if(c1>0 && c2<0)
	       printf("The co-ordinates(%d,%d) lies on 4th quadrant\n",c1,c2);
          

		      else if(c1==0 && c2==0)
                     printf("The co-ordinates(%d,%d) lies on origin\n",c1,c2);

return 0; 
					}
