run: main.o Persona.o Air_bender.o Fire_bender.o Water_bender.o Earth_bender.o Non_bender.o poderespecial.o Ofensivo.o Defensivo.o Curativo.o 
	g++ main.o Persona.o Air_bender.o Fire_bender.o Water_bender.o Earth_bender.o Non_bender.o poderespecial.o Ofensivo.o Defensivo.o Curativo.o -o run
main.o: main.cpp Persona.h Air_bender.h Fire_bender.h Water_bender.h Earth_bender.h Non_bender.h poderespecial.h Ofensivo.h Defensivo.h Curativo.h 
	g++ -c main.cpp
Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp
Air_bender.o: Air_bender.h Air_bender.cpp
	g++ -c Air_bender.cpp
Fire_bender.o: Fire_bender.h Fire_bender.cpp
	g++ -c Fire_bender.cpp
Water_bender.o: Water_bender.h Water_bender.cpp
	g++ -c Water_bender.cpp
Earth_bender.o: Earth_bender.h Earth_bender.cpp
	g++ -c Earth_bender.cpp
Non_bender.o: Non_bender.h Non_bender.cpp
	g++ -c Non_bender.cpp
poderespecial.o: poderespecial.h poderespecial.cpp
	g++ -c poderespecial.cpp
Ofensivo.o: Ofensivo.h Ofensivo.cpp
	g++ -c Ofensivo.cpp
Defensivo.o: Defensivo.h Defensivo.cpp
	g++ -c Defensivo.cpp
Curativo.o: Curativo.h Curativo.cpp
	g++ -c Curativo.cpp


