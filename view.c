#include"lmsheader.h"
void view(struct book *ptr)
{
	struct book *temp=ptr;
	printf("------------------------------------------------------------------------------------------------------\n");
	printf("|                                      BOOK DETAILS                                                  |\n");
	printf("------------------------------------------------------------------------------------------------------\n");
	while(temp!=0)
	{
		printf("|book id: %d   book title: %s     book author: %s     quantity: %d                         |\n",temp->bid,temp->title,temp->author,temp->quan);
		temp=temp->next;
	}
	printf("------------------------------------------------------------------------------------------------------\n");
}
