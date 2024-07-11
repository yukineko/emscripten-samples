CC = emcc
CCOPT = -s WASM=1 -s EXPORTED_FUNCTIONS='["_fib", "_main"]' -s EXPORTED_RUNTIME_METHODS='["cwrap"]' -s FORCE_FILESYSTEM -s NO_EXIT_RUNTIME 
all: 
	$(CC) fib.c -o fib.js $(CCOPT);