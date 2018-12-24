CPP=g++
OBJECTS=personaje.o main.o

VideoJuego: $(OBJECTS)
	$(CPP) $(OBJECTS) -o VideoJuego

main.o: main.cpp 
	$(CPP) -c main.cpp

personaje.o: personaje.cpp personaje.h
	$(CPP) -c personaje.cpp

clean:
	rm -rf *.o VideoJuego	
