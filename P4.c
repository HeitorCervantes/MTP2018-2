/* Heitor Cervantes Gomes
 11811EBI027
  P4.c  */
  
  
#include<stdio.h>

long long int funcao ( int , int );

int main()
{
	int m , n;
	printf("\nValores de M e N , respectivamente : ");
	scanf("%d %d", &m , &n);
	printf("\nA(%d,%d) = %lld", m , n, funcao(m,n) );
	return 0;
}


long long int funcao ( int a, int b)
{
	if( a > 0 && b > 0 )
	{
		return funcao(a-1, funcao(a , b-1));
	}
	else if( a > 0 && b == 0)
	{
		return funcao( a - 1 , 1 );
	}
	else if(a == 0)
	{
		return b+1;
	}
}
