
all:
	g++ -I ./include -o ./bin/haizei_test ./main.c ./src/haizei_test.c ./src/test1.c
	././bin/haizei_test
clean:
	rm ./bin/haizei_test

