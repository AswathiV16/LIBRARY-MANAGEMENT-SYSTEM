#include "lmsheader.h"
struct issue *iptr=0;
void issfun(struct book **hptr)
{
        struct book *temp=*hptr;
        struct issue *new;

        int bid;
        time_t t;
        struct tm *tm1;

	printf("******ISSUE SECTION******\n");
        printf("enter book id to issue\n");
        scanf("%d",&bid);

        while(temp)
        {
                if(temp->bid==bid)
                {
                        if(temp->quan<=0)
                        {
                                printf("book not available\n");
                                return;
                        }

                        new=(struct issue *)malloc(sizeof(struct issue));

                        static int iid=1;

                        new->issid=iid++;

                        new->bookid=bid;

                        printf("enter user id\n");
                        scanf("%d",&new->userid);

                        printf("enter user name\n");
                        scanf("%s",new->username);

                        t=time(0);

                        tm1=localtime(&t);

                        strftime(new->issdate,20,"%d-%m-%Y",tm1);

                        t=t+(7*24*60*60);

                        tm1=localtime(&t);

                        strftime(new->duedate,20,"%d-%m-%Y",tm1);

                        strcpy(new->returndate,"NOT_RETURNED");

                        new->fine=0;

                        new->nextnode=0;

                        temp->quan--;

                        if(iptr==0)
                                iptr=new;
                        else
                        {
                                struct issue *last=iptr;

                                while(last->nextnode)
                                        last=last->nextnode;

                                last->nextnode=new;
                        }

                        printf("book issued successfully\n");
                        printf("issue date : %s\n",new->issdate);
                        printf("due date   : %s\n",new->duedate);

                        return;
                }

                temp=temp->next;
        }

        printf("book id not found\n");
}
