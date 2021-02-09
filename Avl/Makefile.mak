CPP    = g++
RM     = rm -f
OBJS   = main.o \
         avl.o

LIBS   =
CFLAGS =

.PHONY: Projeto.exe clean clean-after

all: Projeto.exe

clean:
	$(RM) $(OBJS) Projeto.exe

clean-after:
	$(RM) $(OBJS)

Projeto.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.c avl.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

avl.o: avl.c avl.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

