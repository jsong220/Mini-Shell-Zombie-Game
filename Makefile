output:	main.o Player.o Space.o HospitalRoom.o WeaponsRoom.o ArmorRoom.o NeganRoom.o ZombieRoom.o ExitRoom.o
	g++ main.o Player.o Space.o HospitalRoom.o WeaponsRoom.o ArmorRoom.o NeganRoom.o ZombieRoom.o ExitRoom.o -std=c++0x -o output

main.o:	main.cpp
	g++ -std=c++0x -c main.cpp

Player.o:	Player.cpp Player.hpp
	g++ -std=c++0x -c Player.cpp

Space.o:	Space.cpp Space.hpp
	g++ -std=c++0x -c Space.cpp

HospitalRoom.o:	HospitalRoom.cpp HospitalRoom.hpp
	g++ -std=c++0x -c HospitalRoom.cpp

WeaponsRoom.o:	WeaponsRoom.cpp WeaponsRoom.hpp
	g++ -std=c++0x -c WeaponsRoom.cpp

ArmorRoom.o:	ArmorRoom.cpp ArmorRoom.hpp
	g++ -std=c++0x -c ArmorRoom.cpp

NeganRoom.o:	NeganRoom.cpp NeganRoom.hpp
	g++ -std=c++0x -c NeganRoom.cpp

ZombieRoom.o:	ZombieRoom.cpp ZombieRoom.hpp
	g++ -std=c++0x -c ZombieRoom.cpp

ExitRoom.o:	ExitRoom.cpp ExitRoom.hpp
	g++ -std=c++0x -c ExitRoom.cpp

clean:
	rm *.o output
