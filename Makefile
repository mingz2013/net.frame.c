clean:
	rm -rf build/*
build: clean
	gcc -o build/main src/main.c
.PHONY: clean build
