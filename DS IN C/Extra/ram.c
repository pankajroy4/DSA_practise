#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     char *s;
//     s=malloc(1024 *sizeof(char));
//     printf("\nEnter string:");
//     scanf("%s",s);  
//     int count=0;
//     for(int i=0;i<10;i++)
//     {
//         for(int j=0;s[j]!='\0';j++)
//         {
//             if(s[j]-48==i)
//             {
//                 count++;
//             }
//         }
//         printf("%d ",count);
//         count=0;
        
//     } 
//     return 0;
// }


// how to scan multiple word line in c progamming
// int main(){
//     char *ch;
//     ch=(char *)malloc(5000000 *sizeof(char));
//     if(ch==NULL){
//         printf("\nInsufficient memory");
//         return 0;
//     }
//     printf("\nenter a string:");
//     scanf("%[^\n]s",&ch);
//     printf("\nOutput is \n\n");
//     printf("%s",&ch);
//     return 0;
    

// }

// int main(){
//     int arr[4][4]={    {0,1,0,0},{1,0,1,0},{1,0,0,0},{0,0,1,0}   };
//     int i,j,column,count=0;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
     
//     for(j=0;j<4;j++){
//         for(i=0;i<4;i++){
//             if(arr[i][j]==0)
//                count++;
//         }
//         if(count==4){
//             column=j;
//             break;
//         }
//         else
//            count=0;
//     } 
//     printf("source vertes is V[%d]",column);
//     return 0;

// }

// ********************************************************

// #include<stdio.h>
// struct student{
//     int roll;
//     char grade;
//     float per;
// };
// typedef struct student student;

// int main(){
    // student s[3];
    // int i;
    // student *p;
    // p=s;

//     for(i=0;i<3;i++){
//         printf("\nEnter roll grade per:");
//         scanf("%d %c %f",&(p+i)->roll,&(p+i)->grade,&(p+i)->per);
//     }

//     for(i=0;i<3;i++){
//         printf("\n%d %c %f",(p+i)->roll,(p+i)->grade,(p+i)->per);

//     }    
//     return 0;
// }


// **************************************************************************

// #include<stdio.h>
// struct student{
//     int roll;
//     char grade;
//     float per;
// };
// typedef struct student student;

// int main(){
//     student s[3];
//     int i;
//     student *p;
//     p=s;      

//     for(i=0;i<3;i++){FF
//         printf("\nEnter roll grade per:");
//         scanf("%d %c %f",&p[i].roll,&p[i].grade,&p[i].per);
//     }

//     for(i=0;i<3;i++){
//         printf("\n%d %c %f",p[i].roll,p[i].grade,p[i].per);

//     }      
//     return 0;
// }

// ******************************************************************************

// #include<stdio.h>
// #include<malloc.h>
// #include<stdlib.h>

// struct student{
//     int roll;
//     char grade;
//     float per;
// };
// typedef struct student student;

// int main(){
//     student *p=(student *)malloc(3*sizeof(student));
  
//     int i;
//     for(i=0;i<3;i++){
//         printf("\nEnter roll grade per:");
//         scanf("%d %c %f",&p[i].roll,&p[i].grade,&p[i].per);
//     }

//     for(i=0;i<3;i++){
//         printf("\n%d %c %f",p[i].roll,p[i].grade,p[i].per);

//     }      
//     return 0;
// }

// *****************************************************************************






int main(){
    int x=12345;
    int sum=0;
    int y;
    for(int i=0;i<5;i++){
        y=x%10;
        sum+=y;
        x=x/10;   
    }
    printf("Sumis %d",sum);
    return 0;
}