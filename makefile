BrowserSimulator: main.o Browser.o Executive.o Tab.o
	g++ -g -std=c++11 -Wall main.o Browser.o Executive.o Tab.o -o BrowserSimulator

main.o: main.cpp Executive.h
	g++ -g -std=c++11 -Wall -c main.cpp

Browser.o: Browser.cpp
	g++ -g -std=c++11 -Wall -c Browser.cpp

Executive.o: Executive.cpp
	g++ -g -std=c++11 -Wall -c Executive.cpp

Tab.o: Tab.cpp LinkedList.h LinkedList.cpp Node.h Node.cpp 
		g++ -g -std=c++11 -Wall -c Tab.cpp

clean:
	rm *.o BrowserSimulator
