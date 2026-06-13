library: lms.o add.o update.o remove.o search.o view.o issuebook.o returnbook.o listissued.o save.o
	cc lms.c add.c update.c remove.c search.c view.c issuebook.c returnbook.c listissued.c save.c -o library

lms.o: lms.c
	cc -c lms.c

add.o: add.c
	cc -c add.c

update.o: update.c
	cc -c update.c

remove.o: remove.c
	cc -c remove.c

search.o: search.c
	cc -c search.c

view.o: view.c
	cc -c view.c

issubook.o: issuebook.c
	cc -c issuebook.c

returnbook.o: returnbook.c
	cc -c returnbook.c
	
listissued.o: listissued.c
	cc -c listissued.c

save.o: save.c
	cc -c save.c
