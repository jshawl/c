all:
	cc -g app.c -o app
	#valgrind --track-origins=yes ./app
	./app one_arg
	./app two args
	./app three cool args

clean:
	rm -f app
	rm -rf app.dSYM