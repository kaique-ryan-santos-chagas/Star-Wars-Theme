all: compile link 

compile:
	g++ -I src/include -c star-wars.cpp

link:
	g++ star-wars.o -o star-wars -L src/lib -l sfml-audio -l sfml-window -l sfml-system -l sfml-graphics