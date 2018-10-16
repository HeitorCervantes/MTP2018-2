/* 
   Heitor Cervantes Gomes
   11811EBI027
   P3.c 
*/

#include<stdio.h>

int po(int a, int b)
{
	int flag = a, k = 1;
	if(b==0)
	return 1;
	
	else if(b==0)
	return a;
	
	else
	{
	  for(k; k<b; k++)
	  {
		flag = flag*10;
  	  }
  	  return flag;
	}
		
}
 int main()
 {
 	char str[256];
 	int i=0, j, result = 0;
 	printf("\nDigite a string: ");
 	scanf("%s", str);
 	
 	for(i; str[i]!='\0';)
 	{
 		
 		if(str[i]>='0' && str[i]<='9')
 		i++;
 		
 		else
 		 for(j=i; str[j]!='\0'; j++)
 		  str[j] = str[j+1]; 		
	}
	i = i - 1;
	for(i, j = 0; i>=0 ; i--, j++)
	{
		result = result + (str[i] - 48)*po(10,j);
	}
	
	printf("\nValor do inteiro: %d ", result);
 	return 0;
 }
