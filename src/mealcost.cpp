/* MealCost.cpp
* John Crawford
* 2022-08-23
* # Given the cost of a meal, sales tax, and tip %, calculate the check price #
*/

#include <iostream>
#include <string>

int main() {
	const double SALES_TAX = 0.07;
	double tip;
	double tax;
	double meal_cost;
	double total_cost;
	double no_of_people;

	std::cout << "How much does your meal cost? ";
	std::cin >> meal_cost;

	std::cout << "Now, what will you tip in %? ";
	std::cin >> tip;

	std::cout << "How many people are eating? ";
	std::cin >> no_of_people;
	
	tax = meal_cost * SALES_TAX;
	meal_cost += tax;
	tip = meal_cost * (tip / 100);
	meal_cost += tip;
	std::cout << "The total cost of your meal will be $" << meal_cost << std::endl;
}
