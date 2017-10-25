#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	char spz [6];
	
	printf("KE");
	srand(time(NULL));
	for(i=0;i<3;i++)
	{
		spz[i]=rand()%10+48;
	}
	for(i=3;i<5;i++)
	{
		spz[i]=rand()%26+65;
	}
	spz[5]='\0';
	printf("%s", spz);
}
		
	
