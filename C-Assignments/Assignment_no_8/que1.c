#include<stdio.h>

struct student
	{
	  int rollno;
	  char name[20];
	  float marks;
	};

typedef struct student stud_t;

int main(void)
	{
		stud_t  s1;

		printf("Enter roll no : ");
		scanf("%d",&s1.rollno);


		printf("Enter name : ");
		scanf("%*c%[^\n]s",s1.name);


		printf("Enter marks : ");
		scanf("%f",&s1.marks);
		printf("rollno = %d, name = %s, marks = %f\n",s1.rollno, s1.name, s1.marks);

return 0;
	}
