all: build

build: main_executable_module.o data_io.o data_stat.o data_process.o decision.o
	gcc main_executable_module.o data_io.o data_stat.o data_process.o decision.o -o main

main_executable_module.o: main_executable_module.c
	gcc -Wall -Werror -Wextra main_executable_module.c

data_io.o: data_io.c
	gcc -Wall -Werror -Wextra ../data_libs/data_io.c

data_stat.o: data_stat.c
	gcc -Wall -Werror -Wextra ../data_libs/data_stat.c

data_process.o: data_process.c
	gcc -Wall -Werror -Wextra ../data_module/data_process.c

decision.o: decision.c
	gcc -Wall -Werror -Wextra ../yet_another_module/decision.c

clean:
	rm -rf *.o main