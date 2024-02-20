#include<stdio.h>
#include<conio.h>
void main()
 {
   char x;
   clrscr();
   printf("enter a CAPITAL LETTER: ");
   scanf("%c",&x);
   if(x=='A'|| x=='E'|| x=='I'|| x=='O'|| x=='U')
   printf("THE LETTER IS VOWEL.");
   else
   printf("THE LETTER IS NOT A VOWEL");
   getch();
   };