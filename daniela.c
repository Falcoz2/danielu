#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct perso
{
  char nom[20];
	int pv;
	int touche;
	int blessure;
	int tir;
};

void attack(struct perso *persoptrA,  struct perso *persoptrB) {

	time_t t;

	int result;

	srand((unsigned) time(&t));

	for(int i = 0 ; i < persoptrA->tir ; i++ )
	{
		result = rand() % ((7-1) + 1);
		printf("%d\n", result);
	}

	if(result <= persoptrA->touche)
	{

		for(int i = 0 ; i < persoptrA->tir ; i++ )
		{
			result = rand() % ((7-1) + 1);
			printf("%d\n", result);
		}

	}

	if(result <= persoptrB->blessure)
	{
		persoptrB->pv--;
	}

	if(persoptrB->pv == 0)
	{
		printf("%s est mort", persoptrB->nom);
	}

}


void main()
{
	struct perso ultramarine ,*persoptr,necron ,*persoptr2;

			strcpy(ultramarine.nom,"Ultramarine");
			ultramarine.pv = 2;
			ultramarine.touche = 3;
			ultramarine.blessure = 3;
		  ultramarine.tir = 1;

		  strcpy(necron.nom,"Necron");
			necron.pv = 1;
			necron.touche = 4;
			necron.blessure = 2;
			necron.tir = 2;

			int n;

		  while(n != 1 && n != 2)
			{

				printf("Ultramarine, taper 1, Nécron taper 2\n");

				scanf("%d", &n);

        printf("\n%d\n", n);
      }

			if(n == 1)
			{

					persoptr = &ultramarine;
					persoptr2 = &necron;

			}

			else if(n == 2)
			{
					persoptr = &necron;
					persoptr2 = &ultramarine;
			}


		while(persoptr->pv != 0 && persoptr2->pv != 0)
		{
				attack(persoptr, persoptr2);
			  attack(persoptr2, persoptr);
		}

}
