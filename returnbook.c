#include "lmsheader.h"

void retfun(struct book **hptr)
{
        struct issue *it=iptr;
        struct book *bt=*hptr;

        int bid,uid;

        time_t t;
        struct tm *tm1;

        printf("******RETURN BOOK SECTION******\n");
        printf("enter book id\n");
        scanf("%d",&bid);

        printf("enter user id\n");
        scanf("%d",&uid);

        while(it)
        {
                if(it->bookid==bid && it->userid==uid &&
                        strcmp(it->returndate,"NOT_RETURNED")==0)
                {
                        t=time(0);

                        tm1=localtime(&t);

                        strftime(it->returndate,20,"%d-%m-%Y",tm1);

                        while(bt)
                        {
                                if(bt->bid==bid)
                                {
                                        bt->quan++;
                                        break;
                                }

                                bt=bt->next;
                        }

                        printf("book returned successfully\n");
                        printf("return date : %s\n",it->returndate);

                        return;
                }

                it=it->nextnode;
        }

        printf("issue record not found\n");
}
