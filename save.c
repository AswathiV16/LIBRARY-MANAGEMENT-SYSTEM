#include "lmsheader.h"
void save(struct book *bptr)
{
        FILE *fp;

        struct book *bt=bptr;
        struct issue *it=iptr;

        fp=fopen("books.dat","w");
        while(bt)
        {
                fprintf(fp,"%d %s %s %d\n",bt->bid,bt->title,bt->author,bt->quan);
                bt=bt->next;
        }
        fclose(fp);

        if(iptr != NULL)
	{
		fp=fopen("issued.dat","w");
		while(it)
		{
			fprintf(fp,"%d %d %d %s %s %s %s %d\n",it->issid,it->bookid,it->userid,it->username,it->issdate,it->duedate,it->returndate,it->fine);
                it=it->nextnode;
		}
                fclose(fp);
	}

        printf("data saved successfully\n");
}
