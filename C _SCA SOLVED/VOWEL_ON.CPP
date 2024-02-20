 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  char vowel;
  clrscr();
  printf("Enter a character:");
  scanf("%c",&vowel);
  switch(vowel)
  {
  case 'A':case 'a':
  printf("character is vowel.");
  break;
  case 'E':case 'e':
  printf("character is vowel.");
  break;
  case 'I':case 'i':
  printf("character is vowel.");
  break;
  case 'O':case 'o':
  printf("character is vowel.");
  break;
  case 'U':case 'u':
  printf("character is vowel.");
  break;
  default:
  printf("not a vowel.");
  }
  getch();
  };