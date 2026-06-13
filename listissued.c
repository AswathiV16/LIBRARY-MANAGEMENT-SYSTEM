#include "lmsheader.h"
void listissued(void)
{
        struct issue *temp=iptr;

        printf("------------------------------------------------------------------------------------------------------\n");
        printf("|                    ISSUED BOOK DETAILS                                                             |\n");
        printf("------------------------------------------------------------------------------------------------------\n");

        while(temp)
        {
                printf("IssueID:%d BookID:%d UserID:%d User:%s Issue:%s Due:%s Return:%s Fine:%d\n",temp->issid,temp->bookid,temp->userid,temp->username,temp->issdate,temp->duedate,temp->returndate,temp->fine);

                temp=temp->nextnode;
        }

        printf("------------------------------------------------------------------------------------------------------\n");
}
