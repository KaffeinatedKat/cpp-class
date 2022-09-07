#include <cstdlib>
#include <iostream>
#include <cctype>
#include <string>


struct Temperature {
    double val;

    double toCelsius() {
        return (val - 32) * 5 / 9;
    }

    double toFahrenheit() {
        return (val * 9 / 5) + 32; 
    }
};


int main() {
    double temperature;
    std::string command;
    char type;
    Temperature temp;

    std::cout << "Temperature to convert (? for help): ";
    std::getline(std::cin, command);
    
    if (command == "?") { // Help message
        std::cout << "This program converts temperatures between Celcius and Fahrenheit\n\nTo convert, input a number with either 'f' or 'c' (not case-sensitive) on the end and it will convert the other way\n\nExamples:\n '32f' converts 32 Fahrenheit to Celcius\n '46c' converts 46 Celcius to Fahrenheit\n  ('Q' 'q') to quit\n";
        main();
    } else if (command == "Q" || command == "q") {
        std::exit(0);
    }
    
    try {
        temp.val = std::stof(command);
        type = toupper(command.back());
    } catch(std::invalid_argument) {
        type = 'n'; // Skip conversion and print 'Invalid command'
    }

    if (type == 'F') { // Convert to Celcius
        printf("%.2lf degrees fahrenheit is %.2lf degrees celcius\n", temp.val, temp.toCelsius());
    } else if (type == 'C') {
        printf("%.2lf degrees celcius is %.2lf degrees fahrenheit\n", temp.val, temp.toFahrenheit());
    } else {
        std::cout << "Invalid command: '" << command << "'\n";
        main();
    }

    main();
}

