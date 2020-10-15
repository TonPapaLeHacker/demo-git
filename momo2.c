#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

int main()

{

	int choix = 0;
	double nombre = 0;
	double nombre2 = 0;
	double resultat = 0;

		printf("choisis un nombre\n"); // affiche "choisi" un nombre
		scanf("%lf", &nombre);

		printf("choisis un nombre\n"); // affiche "choisi" un nombre
		scanf("%lf", &nombre2);
	
	printf("1. puissance\n"); // affiche "1. puissance"
	printf("2. racine\n"); // affiche "2. racine"
	printf("3. addition\n"); // affiche "3. addition"
	printf("4. soustraction\n"); // affiche "4. soustraction"
	printf("5. division\n"); // affiche "5. division"
	printf("6. multiplication\n"); // affiche "6. multiplication"
	scanf("%d", &choix);


	switch (choix)
	{

		case 1:
  			resultat = pow(nombre, nombre2); //nombre puissance nombre2
  			printf("%lf\n", resultat); // affiche le resultat
  		
  			break;

		case 2:
  			resultat = nombre * sqrt(nombre2); //nombre fois racine nombre2
  			printf("%lf\n", resultat); // affiche le resultat
  			break;

		case 3:
  			resultat = nombre + nombre2; // nombre + nombre2
  			printf("%lf\n", resultat); // affiche le resultat
  			break;

		case 4:
  			resultat = nombre - nombre2; // nombre - nombre2
  			printf("%lf\n", resultat); // affiche le resultat
  			break;

		case 5:
  			resultat = nombre / nombre2; // nombre / nombre2
  			printf("%lf\n", resultat); // affiche le resultat
  			break;

		case 6:
  			resultat = nombre * nombre2; // nombre * nombre2
  			printf("%lf\n", resultat); // affiche le resultat
  			break;

		default:
  			exit(-1); // fait quitter le programme
  			break;

	}

}
