//[ 7,12,9,11,3 ]
#include<stdio.h>
void main()
{
	int a[] = { 7,12,9,11,3 };
	int size = 5;
	int temp , i , j;
	
	for( i = 0 ; i < size ; i++)
	{
		for( j = 1 ; j < size ; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
				
			}
		}
	}
	
	for( i = 0 ; i < size ; i++)
	{
		printf("%d ",a[i]);
	}
}
