all:
	gcc -g -ggdb -c -o main.o main.c
	nasm -g -f elf64 amain.asm -l amain.lst -F dwarf
	gcc -o main main.o amain.o -fno-pie -no-pie
