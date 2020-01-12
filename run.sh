g++ -c test1.c main.cpp haizei_test.cc -lgtest -lpthread -std=c++11
g++ test1.o main.o haizei_test.o -lgtest -lpthread -std=c++11
./a.out

