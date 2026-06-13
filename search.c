#include"lmsheader.h"
void sear(char,struct book*,char*);
void search(struct book *ptr)
{
	printf("--------------------------------------------------\n");
	printf("|               SEARCH BOOK MENU                 |\n");
	printf("--------------------------------------------------\n");
	printf("|                A. by book id                   |\n|                B. by book name                 |\n|                C. by book author               |\n");
	printf("--------------------------------------------------\n");
	struct book *temp=ptr;
	char op,tit[30],aut[30];
	int id;
	printf("enter option to search a book\n");
	scanf(" %c",&op);
	if(op=='A')
	{
		printf("enter book id to search\n");
		scanf("%d",&id);
		while(temp != 0)
		{
			if(id == temp->bid)
			{
				printf("book id: %d book title: %s   book author: %s   quantity: %d\n",temp->bid,temp->title,temp->author,temp->quan);
				break;
			}
			temp=temp->next;
		}
	}
	switch(op)
	{
		case 'B':
			printf("enter book name to search\n");
			scanf("%s",tit);
			sear(op,ptr,tit);
			break;
		case 'C':
			printf("enter book author to search\n");
                        scanf("%s",aut);
                        sear(op,ptr,aut);
                        break;
	}
}
void sear(char ch,struct book *t,char *p)
{
	struct book *t1=t;
	if(ch=='B')
	{
		while(t1 != 0)
		{
			if(strcmp(t1->title,p)==0)
			{
				printf("book id: %d book title: %s   book author: %s   quantity: %d\n",t1->bid,t1->title,t1->author,t1->quan);
			}
			t1=t1->next;
		}
	}
	else if(ch=='C')
        {
                while(t1 != 0)
                {
                        if(strcmp(t1->author,p)==0)
                        {
                                printf("book id: %d book title: %s   book author: %s   quantity: %d\n",t1->bid,t1->title,t1->author,t1->quan);
                        }
                        t1=t1->next;
                }
        }
}
