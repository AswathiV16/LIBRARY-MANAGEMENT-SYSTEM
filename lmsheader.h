#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct book
{
	int bid;
	char title[50];
	char author[50];
	int quan;
	struct book *next;
};
struct issue
{
	int issid;
	int bookid;
	int userid;
	char username[50];
	char issdate[20];
	char duedate[20];
	char returndate[20];
        int fine;
	struct issue *nextnode;
};
extern struct issue *iptr;
