#include"lmsheader.h"
void add(struct book **ptr)
{
	struct book *temp=(struct book*)malloc(sizeof(struct book));
	printf("enter book details\n");
	printf("enter book title\n");
	scanf("%s",temp->title);
	printf("enter book author\n");
	scanf("%s",temp->author);
	printf("enter book quantity\n");
	scanf("%d",&temp->quan);
	int id;
	if(*ptr ==0)
	{
		temp->bid=1000;
		*ptr=temp;
		(*ptr)->next=0;
	}
	else
	{
		struct book *last=*ptr;
                while(last->next != 0){
                        last=last->next;
                }
                id=last->bid;
                id+=1;
                temp->bid=id;
                temp->next=0;
                last->next=temp;
	}
}
