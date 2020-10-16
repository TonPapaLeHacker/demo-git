#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

int main()
{
	int nombre = 0, random = 0;
	const int MAX = 1000, MIN = 1;

	srand(time(NULL));
	random = (rand() % (MAX - MIN + 1)) + MIN; 

	printf("Veuillez saisir un nombre\n");

	while(1)
	{
		do
		{ 
			if (scanf("%d", &nombre))
			{
				printf("OK\n");
			}
			else
			{
				exit(-1);
			}
		}while (nombre <1 || nombre >=1000);
		
		if(nombre < random)
		{
			printf("PLUS\n");
		}
		else if (nombre > random)
		{
			printf("MOINS\n");
		}
		else
		{
			printf("TROUVE\n");
			break;
		}
	}
	return 0;
}