#include <stdio.h>
#include <stdlib.h>
int count=0 ;

int tower(int n , char source , char dest , char aux )
{
	if(n==0)
	{
		return 0 ;
	}

	tower(n-1,source,aux,dest);
	count ++;
	printf("[%d] Move Disk from Peg %c --> Peg %c \n",count,source,dest);
	tower(n-1,aux,dest,source);

}


int main()
{
	char source='A', dest='B', aux='C';
	int n ;
	printf("Enter the no. the disks : ");
	scanf("%d",&n);
	printf("\nDisk movement sequence to solve it is as follows:\n\n");
	tower(n,source,dest,aux);
	printf("\n");

}