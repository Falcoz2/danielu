#include <stdio.h>
#include <stdlib.h>


void buffet()
{
  int emp;
  while ( (emp = getchar()) != '\n' && emp != EOF ) {};
}


void main()
{
    char a[4],b[4],c[4];
    int d = 0, e = 0, f = 0;  ²
    printf("saisissez la valeur de trois nombres :");

    scanf(a,4,stdin);
    printf("OSKOUR\n");
    buffet();
    d = atoi(a);

    fgets(b,4,stdin);
    printf("OSKOUR\n");
    buffet();

    fgets(c,4,stdin);
    printf("OSKOUR\n");
    buffet();
    f = atoi(c);

   printf("1er nombre = %d\t\n2ème nombre = %d\t\n3ème nombre = %d\t\n", d, e, f);

   if (d > e && d > f)
   {
       printf("le 1er nombre est le plus grand parmis les 3\n");
   }
   else if (e > d && e > f)
   {
      printf("le 2ème nombre est le plus grand parmis les 3\n");
   }
   else
   {
       printf("le 3ème nombre est le plus grand parmis les 3\n");
   }
}
