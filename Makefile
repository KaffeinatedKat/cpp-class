all: clean compile

compile:
	gcc -lstdc++ src/temperature.cpp -o build/temperature
	gcc -lstdc++ src/mealcost.cpp -o build/mealcost
	gcc -lstdc++ src/helloworld.cpp -o build/helloworld

clean:
	rm build/*
