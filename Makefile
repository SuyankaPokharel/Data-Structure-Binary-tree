CC = gcc
CFLAGS = -o solvebinarytree
LDFLAGS = -lm

OBJS = main.o binarytree.o 

a.out: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean: 
	rm $(OBJS) solvebinarytree
