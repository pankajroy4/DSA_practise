/*
************************************************************************************
A Program works on Dijiktra's Shorest Path calculation Algo.
************************************************************************************
*/
#include<stdio.h>
#define MAX 10000
#define SIZE 6

int shortestPath(int [][SIZE], int, int, int []);
int search(int [][SIZE], int);

int main()
{
   int weight[SIZE][SIZE], path[SIZE];
   int i,j, len;
   printf("Please Enter Weight Matrix, you can use spaces to seperate each column\n");
   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         scanf("%d", &weight[i][j]);
      }
   }

   printf("Weight Matrix: \n");
   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         printf("%d ", weight[i][j]);
      }
      printf("\n");
   }

   len = shortestPath(weight, 0, SIZE-1, path);

   printf("\nLenght of Path: %d\n",len);
   for (i = 0; i < len; i++) {
      printf("%d -> ", path[i]);
   }
   return 0;
}

//////////  FUNCTIONS ////////////
/*
function to find shorest path
INPUT ARGUMENTS:
1) A weight matrix
2) source vertex from where's path start
3) destination vertex
4) A empty array in which fn return path
5) fn return lengh of path
*/
int shortestPath(int weight[][SIZE], int source, int dest, int shortPath[])
{
   int label[SIZE] = {MAX};
   int temp[SIZE];
   int path[SIZE][SIZE] = {-1};
   int s, d, w, i, j, min = MAX;

   // filling default value
   for(i=0; i<SIZE; i++)
   {
      label[i] = MAX;
      for (j = 0; j < SIZE; j++) {
         path[i][j] = -1;
      }
   }

   label[source] = 0;
   min = source;
   s =min;
   while(min != dest)
   {
      j = 0;
      for (i = 0; i < SIZE; i++)
      {
         w = weight[s][i];
         // go to next if there is o=no path from 's' to 'i' vertex
         if(w == 0)
            continue;
         // using dijikstra's formula
         // update label
         if(w+label[s] < label[i])
         {
            label[i] = w+label[s];
            path[s][j++] = i;
         }
      }
      // deleting source label
      label[s] = MAX;

      // finding new min label
      min = 0;
      for(i=0; i < SIZE; i++)
      {
         if(label[i] < label[min])
            min = i;
      }
      // set source vertex to min
      s = min;
   }

   // calculating path way
   i = dest;
   j=0;
   while(i != source)
   {
      temp[j++] = i;
      i = search(path, i);
   }
   temp[j] = i;
   // copy path way
   for(i=0; i<=j; i++)
   {
      shortPath[i] = temp[j-i];
   }
   // return len of path
   return j+1;
}
// A helper fn for above fn it search the vertex from path matrix and return row
int search(int path[][SIZE], int x)
{
   int i,j;
   for(i=0; i<SIZE; i++)
      for(j=0; j<SIZE; j++)
      {
         if(path[i][j] == x)
            return i;
      }

}


// some sample input
/*
for size=6

0 4 0 2 0 0
0 0 3 0 3 0
0 0 0 0 0 2
0 0 0 0 3 0
0 0 0 0 0 1
0 0 0 0 0 0
*/
/*
for size=7

0 2 1 4 0 0 0
0 0 2 0 3 0 0
0 0 0 2 5 7 0
0 0 0 0 0 4 0
0 0 0 0 0 0 1
0 0 0 0 0 0 3
0 0 0 0 0 0 1
*/
