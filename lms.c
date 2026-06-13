#include"lmsheader.h" 
void add(struct book**); 
void update(struct book**); 
void Remove(struct book**); 
void search(struct book*);
void view(struct book*);
void issfun(struct book**); 
void retfun(struct book **);
void listissued(void);
void save(struct book *);
int main() { 
	printf("------------------------------------------------------------\n");
       	printf("|                 BOOK MANAGEMENT MENU                     |\n"); 
	printf("------------------------------------------------------------\n"); 
	printf("|                      1.Add New Book                      |\n|                      2.update book details               |\n|                      3.Remove Book                       |\n|                      4.search book                       |\n|                      5.view all books                    |\n|                      6.issue book                        |\n|                      7.Return book                       |\n|                      8.list issued books                 |\n|                      9.Save                              |\n|                      10.Exit                             |\n"); 
	printf("------------------------------------------------------------\n");
       	struct book *hptr=0;
       	int op; 
	printf("enter option 1\n"); 
	scanf("%d",&op); 
	do
	{ 
		if(op==1){
			do{
				add(&hptr);
			       	printf("do you want to add one more book? if yes, then give i/p as 1\n");
			       	scanf("%d",&op);
		       	}while(op==1);
	       	}
	       	else if(op==2){
		       	do{
			       	update(&hptr); 
				printf("do you want to update one more book? if yes, then give i/p as 2\n"); 
				scanf("%d",&op); 
			}while(op==2);
	       	}
	       	else if(op==3){ 
			do{ 
				Remove(&hptr); 
				printf("do you want to remove one more book? if yes, then give i/p as 3\n"); 
				scanf("%d",&op);
		       	}while(op==3); 
		}
	       	else if(op==4){
		       	do{ 
				search(hptr); 
				printf("do you want to search one more book? if yes, then give i/p as 4\n"); 
				scanf("%d",&op); 
			}while(op==4); 
		} 
		else if(op==5){ 
			do{ 
				view(hptr); 
				printf("do you want to view book details? if yes, then give i/p as 5\n"); 
				scanf("%d",&op); 
			}while(op==5); 
		
		}
		else if(op==6){ 
			do{ 
				issfun(&hptr); 
				printf("do you want to issue book details? if yes, then give i/p as 6\n"); 
				scanf("%d",&op); 
			}while(op==6);
	       	}
		else if(op==7){                                                                                                                                                     do{                                                                                                                                                                 retfun(&hptr);                                                                                                                                              printf("do you want to return a book details? if yes, then give i/p as 7\n");                                                                               scanf("%d",&op);
                        }while(op==7);
                }
		else if(op==8){
			do{
				listissued();
				printf("do you want to list the issued book details? if yes, then give i/p as 8\n");
                                scanf("%d",&op);
			}while(op==8);
		}
		else if(op==9){
			printf("******SAVE AND EXIT******\n");
			save(hptr);
			exit(0);
		}
		else if(op==10){
			printf("******EXIT ONLY******\n");
			exit(0);
		}
		printf("enter option 1 or 2 or 3 or 4 or 5 or 6 or 7 or 8 or 9 or 10\n");
		scanf("%d",&op);
	}while(op>=1 && op<=10);
}
