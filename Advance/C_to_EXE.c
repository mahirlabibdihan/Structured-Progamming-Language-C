Source(source.c) -> Expanded(source.i)
gcc -E source.c
gcc -E source.c -o source.i

Source(source.c) -> Assambly(source.s)
gcc -S source.c

Source(source.c) -> Object(source.o)
gcc -c source.c

Source(source.c) -> Executable(source.exe)
gcc source.c -o source.exe

Object(source.o) -> Executable(source.exe)
gcc source.o -o source.exe