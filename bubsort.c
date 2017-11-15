#include <stdio.h>
#include <math.h>
void BubSort ( int n[6] )
{
	int i;
	int j;
	int temp;
	for( i = 0 ; i < 5 ; i++ )
	{
		for ( j = 0; j < 5 - i; j++ )
		{
			if(n[j] > n[j+1])
			{
				temp = n[j];
				n[j] = n[j + 1];
				n [j + 1] = temp;
			}
		}
	}
	for(i = 0; i<6; i++ )
	printf ( "%d \n", n [i]);
}
int main( ) {
	int n[6]= {10, 9, 8, 7, 6, 5};
	int i;
	BubSort(n);
		
}

