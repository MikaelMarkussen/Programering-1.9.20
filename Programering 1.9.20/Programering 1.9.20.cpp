#include <iostream>

int age;

int main()
{
	std::cout << "whats your age?";
	std::cin >> age;
	if (age >= 20) {
		std::cout << "you are an adult!";
	}
	else {
		std::cout << "you are a teenager";
	}
	
}

