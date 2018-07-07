zipname := 9790944
ifdef name
	zipname = $(name)
endif
all: clean
	@gcc -o main src/*.c -I./includes

cmpg: clean
	@gcc -o main src/*.c -I./includes -g -Wall

clean:
	@rm *.zip main -f

run: main
	@./main

debug: clean cmpg
	@valgrind -v --track-origins=yes --leak-check=full ./main

zip:
	@zip -r $(zipname).zip *
	@echo sucess