#include<stdio.h>
#include<conio.h>
void main()
 {
   int p,c,m;
   clrscr();
   printf("enter marks of P,C,M: ");
   scanf("%d%d%d",&p,&c,&m);
   if(p>=50)
     {
      if(c>=55)
	{
	 if(m>=60)
	   {
	    if(p+c+m>=220)
	      printf("Admissionn given");
	    else if(p+m>=130)
	      printf("Admission given.");
	    else
	      printf("Admission not given.");
	   }
	else
	 printf("Admission not given.");
	}
      else
      printf("Admission not given.");
      }
   else
   printf("Admission not given.");
   getch();
   };