#include <stdio.h>
#include <stdlib.h>
#define M 4 //riadky
#define N 7 // stlpce
#include <time.h>

int main ()
{
srand(time(NULL)); // premiesanie cisel
int matrix[M][N];
int i,j;

for(i=0; i<M; i++) //generovanie nahodnych cisiel do matice
{
	for(j=0;j<N;j++){
		matrix[i][j]=rand()%100;
	}
}

for(i=0; i<M; i++) { //vypis pola po riadkoch
for(j=0; j<N;j++)
{
	printf("%2d ", matrix[i][j]);
	
}
printf("\n");
}
printf("\n");
for(j=0;j<N;j++)
{ //vypis pola po stlpcoch
for(i=0;i<M;i++)
{
	printf("%2d ", matrix[i][j]);
}
printf("\n");
}
}
