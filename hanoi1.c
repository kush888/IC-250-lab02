#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
} *top1=NULL,*top2=NULL,*top3=NULL,*temp,*temp1;

 
/* Push data into source stack  */
void push1(int data)
{
    if (top1 == NULL)
    {
        top1 =(struct node *)malloc(1*sizeof(struct node));
        top1->ptr = NULL;
        top1->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top1;
        temp->info = data;
        top1 = temp;
    }
}

/* Push data into destination stack  */
void push2(int data)
{
    if (top2 == NULL)
    {
        top2 =(struct node *)malloc(1*sizeof(struct node));
        top2->ptr = NULL;
        top2->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top2;
        temp->info = data;
        top2 = temp;
    }
}

/* Push data into Auxilary stack  */
void push3(int data)
{
    if (top3 == NULL)
    {
        top3 =(struct node *)malloc(1*sizeof(struct node));
        top3->ptr = NULL;
        top3->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top3;
        temp->info = data;
        top3 = temp;
    }
}


/* Pop Operation on source stack */
int pop1()
{
    
    if (top1 == NULL)
    {
        return 0;
    }
    else
    {
    	int data ;
        temp1 = top1->ptr;
        data = top1->info;
        free(top1);
    	top1 = temp1;
    	return data ;
    }
    
}

/* Pop Operation on destination stack */
int pop2()
{
    
    if (top2 == NULL)
    {
        return 0;
    }
    else
    {
    	int data ;
        temp1 = top2->ptr;
        data = top2->info;
        free(top2);
    	top2 = temp1;
    	return data ;
    }
    
}

/* Pop Operation on auxilary stack */
int pop3()
{
    
    if (top3 == NULL)
    {
        return 0;
    }
    else
    {
    	int data ;
        temp1 = top3->ptr;
        data = top3->info;
        free(top3);
    	top3 = temp1;
    	return data ;
    }
    
}

int main()
{
	int n,i ;
	printf("Enter the no. the disks : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		push1(i);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",pop1())	;
	}
}