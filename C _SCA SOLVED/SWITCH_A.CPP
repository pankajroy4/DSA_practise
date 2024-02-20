 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int a,b;
  char choise;
  clrscr();
  printf("Enter two integer:");
  scanf("%d%d",&a,&b);
  printf("Select operation. \nA/a.ADD\nB/b.SUBTRACT\nC/c.MULTYPLY\nD/d.DIVISION");
  printf("\nEnter your choise:");
  fflush(stdin);
  scanf("%c",&choise);
  switch(choise)
  {
  case 'A':case 'a':
  printf("ADD IS %d",a+b);
  break;
  case 'B':case 'b':
  printf("SUBTRACT IS %d",a-b);
  break;
  case 'C':case 'c':
  printf("MULTIPLY IS %d",a*b);
  break;
  case 'D':case 'd':
  printf("DIVISION IS %f",(float)a/b);
   break;
  default:
  printf("WRONG CHOISE");
  }
  getch();
  };