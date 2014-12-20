all:
	cc -g app.c -o app
	valgrind --track-origins=yes ./app
clean:
	rm -f app
	rm -rf app.dSYM