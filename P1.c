/*Heitor Cervantes Gomes*/
/*11811EBI027*/
/*P1_automato_finito.pdf*/


#include<stdio.h>
int main()
{
  int estado = 0, i = 0;
  char bits[256];
  printf("\nSequencia de bits: ");
  scanf("%s", &bits);
  for (i; bits[i]!='\0'; i++)
    {
      if(bits[i]=='0' && estado==1)
	estado = 2;
      else if(bits[i]=='0' && estado==2)
	estado = 1;
      else if(bits[i]=='1' && estado==0)
	estado = 1;
      else if(bits[i]=='1' && estado==1)
	estado = 0;
    }
  if(estado==0)
    {
      printf("\n\nEh multiplo de 3\t");
      for(i=0; bits[i]!='\0'; i++)
	printf("%c", bits[i]);
    }
  else
    {
      printf("\n\nNao eh multiplo de 3\t");
      for(i=0; bits[i]!='\0'; i++)
	printf("%c", bits[i]);
    }
  printf("\n\n");
  return 0;
}
