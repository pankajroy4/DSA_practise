 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int a,b,choise;
  clrscr();
  printf("Enter two integer:");
  scanf("%d%d",&a,&b);
  printf("Select operation. \n1.ADD\n2.SUBTRACT\n3.MULTYPLY\n4.DIVISION"); printf("\nEnter your choise:"); scanf("%d",&choise);
  switch(choise){
  case 1:
  printf("ADD IS %d",a+b);
  break;
  case 2:
  printf("SUBTRACT IS %d",a-b);
  break;
  case 3:
  printf("MULTIPLY IS %d",a*b);
  break;
  case 4:
  printf("DIVISION IS %f",(float)a/b); break;
  default:
  printf("WRONG CHOISE");}
  getch();
  };