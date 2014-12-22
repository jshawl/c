all:
	cc -g app.c -o app
	valgrind --track-origins=yes ./app

fizzbuzz:
	rm -f fizzbuzz
	cc -g fizzbuzz.c -o fizzbuzz
	./fizzbuzz

clean:
	rm -f app
	rm -rf app.dSYM