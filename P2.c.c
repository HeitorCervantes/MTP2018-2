/* 
   Heitor Cervantes Gomes
   11811EBI027
   P2.c 
*/



#include<stdio.h>

int poww(int a, int b)
{
  int c=1;
  if(b!=0)
  {
  for(b; b>=1.0; b--)
    {
      c = c*a;
    }
  }
  return c;
}
int main()
{
 
  int op = 1;

  while(op!=0)
    {
      printf("1- Binario para Decimal\n2- Binario para Hexadecimal\n3- Hexadecimal para Decimal\n4- Hexadecimal para Binario\n5- Decimal para Binario\n6- Decimal para Hexadecimal\n7- Octal para Decimal\n8- Decimal para Octal\n0- SAIR \n\nOPCAO --> ");
      scanf("%d", &op);
      switch(op)
      {
      case 1:
        {
         char bits[500];
         int i = 0, result = 0, cont = 0;
         
         printf("Informe o numero binario: ");
         scanf("%s", bits);        
         for(cont=0 ; bits[cont]!='\0'; cont++);
         cont = cont - 1;
         while(bits[i] != '\0')
          {
           result = result + ( bits[i] - 48 )*poww(2.0 , cont);
           i++ ;
		   cont--;
          }
         printf("\n\tResultado em Decimal = %d\n\n", result);
         break;
	    }
	   case 2:
	   {
	   	 char bitss[500];
	   	 int i = 0, result = 0, cont = 0, vetbin[500], p;
	   	 
	   	 printf("Informe o numero binario: ");
         scanf("%s", bitss);
		 for(cont=0 ; bitss[cont]!='\0'; cont++);
         cont = cont - 1;
         while(bitss[i] != '\0')
          {
           result = result + ( bitss[i] - 48 )*poww(2.0 , cont);
           i++ ;
		   cont--;
          }
         printf("\n\tResultado em Hexadecimal = %x \n\n", result);
         break;
	   }
	   case 3:
	    {  char bit[500];
	       int i = 0, result = 0, cont = 0;
	       
	   		printf("Informe o numero Hexadecimal: ");
            scanf("%s", bit);
            for(cont=0 ; bit[cont]!='\0'; cont++);
            cont = cont - 1;
            while(bit[i] != '\0')
            {
              if(bit[i] >= 65 && bit[i] <= 70)
              result = result + ( bit[i] - 55 )*poww(16.0 , cont);
              
              else if( bit[i] >= 97 && bit[i] <= 102)
              result = result + ( bit[i] - 87 )*poww(16.0 , cont);
              
              else
              result = result + ( bit[i] - 48 )*poww(16.0 , cont);
              
              i++ ;
		      cont--;
            }
            printf("\n\tResultado em Decimal = %d\n\n", result);
         break;
		}
		case 4:
		{
			char bits[500];
            int i = 0, result = 0, cont = 0 , vetbin[500];
            
			printf("Informe o numero Hexadecimal: ");
            scanf("%s", bits);
            for(cont=0 ; bits[cont]!='\0'; cont++);
            cont = cont - 1;
            while(bits[i] != '\0')
            {
              if(bits[i] >= 65 && bits[i] <= 70)
              result = result + ( bits[i] - 55 )*poww(16.0 , cont);
              
              else if( bits[i] >= 97 && bits[i] <= 102)
              result = result + ( bits[i] - 87 )*poww(16.0 , cont);
              
              else
              result = result + ( bits[i] - 48 )*poww(16.0 , cont);
              
              i++ ;
		      cont--;
            }
        
		    
            for(result, i = 0; result>=1; i++)
            {
            	vetbin[i] = result % 2;
            	result = result / 2;
			}
			printf("\t Resultado em Binario: ");
			for(i; i>=0; i--)
			printf("%d", vetbin[i]);
			printf("\n\n");
            break;
            
		}
		case 5:
			{
				char bits[500];
                int i = 0, result = 0, cont = 0, k, vetbin[500];
                
				printf("Informe o numero decimal: ");
                scanf("%d", &k);
                 for(k, i = 0; k>=1; i++)
                 {
            	  vetbin[i] = k % 2;
            	  k = k / 2;
			     }
			    printf("\t Resultado em Binario: ");
			    for(i; i>=0; i--)
			    printf("%d", vetbin[i]);
		  	    printf("\n\n");
                break;               
			}
		
		case 6:
			{
				int k;
				printf("Informe o numero decimal: ");
				scanf("%d", &k);
				printf("\n Numero Hexadecimal = %x \n", k);
			}
		case 7:
			{
				int k;
				printf("Informe o numero octal: ");
				scanf("%o", &k);
				printf("\n\t Numero decimal = %d \n\n", k);
			}
		case 8:
			{
				int k;
				printf("Informe o numero decimal: ");
				scanf("%d", &k);
				printf("\n\t Numero octal =  %o \n\n", k);
			}
	

    
      }

    }

 
return 0;
}

