#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Buffet()
{
	int emp;

	while ( (emp = getchar()) != '\n' && emp != EOF ) { };
}


void main()
{
	int tab[10];
	char tab2[10];
        int i;
	int l;

		printf("\n\nLire et afficher les éléments d'un tableau :\n");
		printf("------------------------------------------------\n");

		printf("Saisissez 10 éléments dans le tableau :\n");
		for(i = 0;i < 10;i++)
		{
			printf("élément - %d : ",i);
		        fgets(tab2,2,stdin);
			l = atoi(tab2);
		        tab[i] = l;
			Buffet();
		        	
		}

		printf("\nLes éléments dans le tableau sont : ");
		for(i=0; i<10; i++)
		{
			printf("%d ", tab[i]);
		}
		printf("\n");
}
