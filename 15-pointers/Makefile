all:
	cc -g app.c -o app
	#valgrind --track-origins=yes ./app
	./app one_arg
	./app two args
	./app three cool args

fizzbuzz:
	rm -f fizzbuzz
	cc -g fizzbuzz.c -o fizzbuzz
	./fizzbuzz

clean:
	rm -f app
	rm -rf app.dSYM