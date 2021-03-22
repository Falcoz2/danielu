#include <stdio.h>


int main(void)
{
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    for (int i = 0; i < y ;i++)
    {

        for(int j = 0; j < x ;j++) {
         printf(" __");
        }

        printf("\n");

        for(int k = 0; k < x ;k++) {
           printf("|  ");
        }

        printf("|\n");
    }

    return 0;
}



  // printf("\n\npointeur : trouve le nombre max entre 2nombres :\n");
  // printf("-------------------------------------------------\n");
  //
  // printf("tape le 1er nombre :");
  // scanf("%d", ptr1);
  // printf("tape le 2ème nombre :");
  // scanf("%d", ptr2);
  //
  // if(*ptr1>*ptr2)
  // {
  //   printf("\n\n %d est le nombre le plus GRAND", *ptr1);
  // }
  // else
  // {
  // printf("\n\n %d est le nombre le plus GRAND", *ptr2);
  //
  // }
