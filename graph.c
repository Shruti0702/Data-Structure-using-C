#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{
	int i,j,n,m;
	printf("enter the number of vertices in graph:\n");
	scanf("%d",&n);
	struct node *A[n];
	struct node* new_node;
	struct node* temp=NULL;
	for(i=1;i<=n;i++)
	{
		A[i]=NULL;
		printf("enter the number of neighbors of%d\n",i);
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		{
			new_node=(struct node*)malloc(sizeof(struct node));
			printf("enter the neighbor%d of %d",j,i);
			scanf("%d",&new_node->data);
			new_node->next=NULL;
			if(A[i]==NULL)
			{
				A[i]=new_node;
				temp=new_node;
			}
			else
			{
				temp->next=new_node;
				temp=temp->next;
			}
		}
	}
	printf("Graph::\n");
	for(i=1;i<=n;i++)
	{
		printf("%d->",i);
		temp=A[i];
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
