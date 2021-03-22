#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Buffet()
{
	int emp;

	while ( (emp = getchar()) != '\n' && emp != EOF ) { };
}

void ecrire(char *matiere)
{
	printf("Saisissez la note obtenue en %s :\n",matiere);
}

void main()
{
	char p[3],c[3],m[3];
	char matiere[][30]= {"physique", "chimie", "math"};

	int q = 0;
	int o = 0;
	int w = 0;

  int *pointeur = NULL;
	char (*pointeur2)[1][30] = NULL;

	pointeur2 = &matiere;

  strcat(matiere[0]," ");
  strcat(matiere[0],matiere[1]);

	int emp;

	printf("critères d'éligibilités :\n");
	printf("Note en maths >=65\n");
	printf("Note en physique >=55\n");
	printf("Note en chimie >=50\n");
	printf("Total des trois matières >=190\n");
	printf("Total en maths et physique >=140\n");
	printf("-----------------------------------\n");




  while( q <= 55 )
	{
			  ecrire(pointeur2[0]);
				fgets(p,3,stdin);
				q = atoi(p);
				while ( (emp = getchar()) != '\n' && emp != EOF ) { }
	}



	while( o <= 50 )
	{
			ecrire(pointeur2[0][1]);
			fgets(c,3,stdin);
			o = atoi(c);
			while ( (emp = getchar()) != '\n' && emp != EOF ) { }
		}



	while( w <= 65 )
	{
			 ecrire(pointeur2[0][2]);
			 fgets(m,3,stdin);
			 w = atoi(m);
			 while ( (emp = getchar()) != '\n' && emp != EOF ) { }
	}


	printf("total des notes, physique, chimie et maths : %d\n", w+q+o);
	printf("total maths et physique : %d\n",w+q);

	if( w + q + o >= 190)
	{
    	printf("éligible\n");
	}
	else
	{
	    printf("non éligible\n");
	} if
}
