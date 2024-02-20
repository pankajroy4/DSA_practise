#include<conio.h>
#include<stdio.h>
void main()
{
int age;
char status,gen;
clrscr();
printf("enter your marattial status(y /n)\n and gender(m/f):");
scanf("%c %c",&status,&gen);
printf("\nEnter your age:");
scanf("%d",&age);
 if(status=='y')
   printf("insurence given.");
 else
     if(gen=='m')
	{
	 if(age>35)
	   printf("insurence given.");
	 else
	 printf("insurence not given.");
	 }
      else
	 if(age>30)
	 printf("insurence given.");
	 else
	 printf("insurence not given.");
getch();
};