#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
   triangle* temp;
    int x=0;
    for(int j=0;j<n;j++)
    {
        int m=(tr[j].a+tr[j].b+tr[j].c)/2;
        int n=sqrt( m* (m-tr[j].a) * (m-tr[j].b) * (m-tr[j].c) );
        
        for(int i=j+1;i<=n;i++)
        {
           int p=(tr[i].a+tr[i].b+tr[i].c)/2;
           int s=sqrt( p* (p-tr[i].a) * (p-tr[i].b) * (p-tr[i].c) );
           if(n>s)
           {
               *temp=tr[j];
               tr[j]=tr[i];
               tr[i]=*temp;
           }
        }
    }

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}