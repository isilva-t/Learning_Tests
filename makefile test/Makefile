CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o hello.o
	@echo "linkink and produce final aplication"
	gcc $(CFLAGS) main.o hello.o -o final
	chmod +x final

main.o: main.c
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

hello.o: hello.c
	@echo "compiling hello.c"
	gcc $(CFLAGS) -c hello.c

clean:
	@echo "remove all but the source"
	rm main.o hello.o final
