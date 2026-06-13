#include"lmsheader.h"
void Remove(struct book **ptr)
{
	struct book *temp=*ptr;
	struct book *prev;
	printf("---------------------------------------------\n");
	printf("|            REMOVE BOOK MENU               |\n");
	printf("---------------------------------------------\n");
	printf("|              A. by book id                |\n|              B. by book name              |\n");
	printf("---------------------------------------------\n");
	char op,tit[30];
	int id;
	printf("enter option to remove\n");
	scanf(" %c",&op);
	if(op=='A')
	{
		printf("enter book id to remove\n");
		scanf("%d",&id);
		while(temp != 0)
		{
			if(id == temp->bid)
			{
				printf("below book detail will be removed\n");
				printf("book id: %d book title: %s   book author: %s    quantity: %d\n",temp->bid,temp->title,temp->author,temp->quan);
				prev->next=temp->next;
				break;
			}
			prev=temp;
			temp=temp->next;
		}
	}
	else if(op=='B')
	{
		printf("enter book name to remove\n");
		scanf("%s",tit);
		while(temp != 0)
		{
			if(strcmp(temp->title,tit)==0)
			{
				printf("below book detail will be removed\n");
				printf("book id: %d book title: %s   book author: %s    quantity: %d\n",temp->bid,temp->title,temp->author,temp->quan);
				prev->next=temp->next;
			}
			prev=temp;
			temp=temp->next;
		}
	}
}
