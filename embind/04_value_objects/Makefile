.PHONY: all clean
all:
	emcc -o value_objects.js value_objects.cpp -lembind
	serve

clean:
	rm *.js *.wasm
