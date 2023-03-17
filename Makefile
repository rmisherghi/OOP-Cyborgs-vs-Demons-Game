# Makefile for 'example' program

# Our output program name
PROG = Assignment5

# The compiler
CC = g++

# Debugging flags
CPPFLAGS = -g -Wall

# Object files that will be linked together
OBJS = main.o

# Program (example) depends on object files (.o files)
$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

# main.o depends on main.cpp
main.o : main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

barlog.o : Barlog.h Barlog.c
	$(CC) $(CPPFLAGS) -c Barlog.cpp

creature.o : Creaute.h Creature.cpp
	$(CC) $(CPPFLAGS) -c Creature.cpp

cyberdemon.o : Cyberdemon.h Cyberdemon.cpp
	$(CC) $(CPPFLAGS) -c Cyberdemon.cpp

demon.o : Demon.h Demon.cpp
	$(CC) $(CPPFLAGS) -c Demon.cpp

elf.o : Elf.h Elf.cpp
	$(CC) $(CPPFLAGS) -c Elf.cpp

human.o : Human.h Human.cpp
	$(CC) $(CPPFLAGS) -c Human.cpp

	




# Clean removes build files that are created
clean:
	rm -f core $(PROG) $(OBJS)
