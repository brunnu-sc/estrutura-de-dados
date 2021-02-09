CPP    = g++
RM     = rm -f
OBJS   = main.o \
         ListaSequencial.o

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

main.o: main.c ListaSequencial.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

ListaSequencial.o: ListaSequencial.c ListaSequencial.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

