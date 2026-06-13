#include"lmsheader.h"
void update(struct book **ptr)
{
	printf("-----------------------------------------\n");
	printf("|         UPDATE BOOK DETAILS           |\n");
	printf("-----------------------------------------\n");
	printf("|             A. by book id             |\n|             B. by book name           |\n");
	printf("-----------------------------------------\n");
	struct book *temp=*ptr;
	char op,tit[30],aut[30];
	int id,quant;
	printf("enter option to update\n");
	scanf(" %c",&op);
	if(op=='A')
	{
		printf("enter book id to modify\n");
		scanf("%d",&id);
		while(temp != 0)
		{
			if(id == temp->bid)
			{
				printf("book id: %d  book title: %s   book author: %s   quantity: %d\n",temp->bid,temp->title,temp->author,temp->quan);
				break;
			}
			temp=temp->next;
		}
l1:
		printf("-----------------------------------------\n");
		printf("|           option to modify            |\n");
		printf("-----------------------------------------\n");
		printf("|           A.to modify title           |\n|           B.to modify author          |\n|           C.to modify quantity        |\n");
		printf("-----------------------------------------\n");
		printf("enter options to modify\n");
		scanf(" %c",&op);
		if(op=='A')
		{
			printf("enter title to modify\n");
			scanf("%s",tit);
			strcpy(temp->title,tit);
		}
		if(op=='B')
		{
			printf("enter author to modify\n");
                        scanf("%s",aut);
                        strcpy(temp->author,aut);
		}
		if(op=='C')
		{
			printf("enter quantity to modify\n");
                        scanf("%d",&quant);
                        temp->quan=quant;
		}
	}
	else if(op=='B')
	{
		printf("enter book name to modify\n");
                scanf("%s",tit);
                while(temp != 0)
                {
                        if(strcmp(temp->title,tit)==0)
                        {
                                printf("book id: %d  book title: %s   book author: %s   quantity: %d\n",temp->bid,temp->title,temp->author,temp->quan);
                                goto l1;
                        }
                        temp=temp->next;
                }
	}
}
