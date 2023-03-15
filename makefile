test: driver.o
	g++ -o test driver.o

driver.o: driver.cpp linkedStack.cpp linkedStack.h
	g++ -c driver.cpp