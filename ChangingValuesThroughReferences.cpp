#include <iostream>

void ChangeNumbers(int& X, int& Y); // Instead of using the variables' values we use a reference to its address using '&'.

int main()
{
	int Number, Number2;

	std::cout << "Type one number: ";
	std::cin >> Number;
	std::cout << "Type another number: ";
	std::cin >> Number2;
	std::cout << "Memory address of Number: " << &Number << "\nMemory address of Number2:  " << &Number2 << "\n";
	std::cout << "Values before change\n";
	std::cout << "First number: " << Number << " | Second number: " << Number2 << "\n";
	std::cout << "Values after change\n";
	ChangeNumbers(Number, Number2); 
	// Above is where we call the function to change the numbers. If we use a reference to a variable address we may modify it.
	std::cout << "First number: " << Number << " | Second number: " << Number2 << "\n";
}

void ChangeNumbers(int& X, int& Y)
{
	int Temp{ X };
	std::cout << "Memory address of X: " << &X << "\nMemory address of Y:  " << &Y << "\n";
	X = Y;
	Y = Temp;
}
