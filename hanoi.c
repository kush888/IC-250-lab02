#include<stdio.h>
#include <stdlib.h>

int tower(int n , char source , char dest , char aux )
{
	//static int count=0 ;
	if(n==0)
	{
		return 0 ;
	}

	tower(n-1,source,aux,dest);
	//count ++;
	printf("Move Disk from Peg %c --> Peg %c %d \n",source,dest,count);
	tower(n-1,aux,dest,source);

}


int main()
{
	char source='A', dest='B', aux='C';
	int n ;
	printf("Enter the no. the disks : ");
	scanf("%d",&n);
	printf("\n");
	tower(n,source,dest,aux);
}