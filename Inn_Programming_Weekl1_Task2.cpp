//Task 2

#include <iostream>
#include <string>

std::string name;
int age;
char yesno;

int main()
{
	std::cout << "Whats's your name? ";
	std::getline(std::cin, name);
	std::cout << "And how old are you? ";
	std::cin >> age;
	std::cout << std::endl << "So... do you like coffee? (y/n) ";
	std::cin >> yesno;
	switch (yesno) 
	{
	case 'y':
		std::cout << "Hello " << name << ". You are " << age << " years old, and you seem to like coffee!";
		break;
	case 'n':
		std::cout << "Hello " << name << ". You are " << age << " years old, and you don't seem to like coffee!";
	}
}
