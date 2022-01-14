OBJS	= main.o Parcelle.o point2D.o Polygone.o
SOURCE	= main.cpp Parcelle.cpp point2D.cpp Polygone.cpp
HEADER	= Parcelle.hpp point2D.hpp Polygone.hpp
OUT	= 
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

Parcelle.o: Parcelle.cpp
	$(CC) $(FLAGS) Parcelle.cpp 

point2D.o: point2D.cpp
	$(CC) $(FLAGS) point2D.cpp 

Polygone.o: Polygone.cpp
	$(CC) $(FLAGS) Polygone.cpp 


clean:
	rm -f $(OBJS) $(OUT)