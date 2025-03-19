#include<cstdio>
#include<iostream>
#include<fstream>
#include<string>
// I've added 2-2,2-3,and 2-4 all togetherby accident. I started off by adding just addition to the calculator, but then I added subtraction and the rest. 
// to initalize the calcukator in my code your would have to input a vary of words to say to activate the certain operation for 2-4
struct Calculator
{
	int num1;
	int num2;
	char operation;
	int result;
};

int main(){
	Calculator calc;
	int num1, num2;
	char operation;
	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;
	std::cout << "Enter operation: ";
	std::cin >> operation;
	calc.num1 = num1;
	calc.num2 = num2;
	calc.operation = operation;
	if (calc.operation == '+')
	{
		calc.result = calc.num1 + calc.num2;
		std::cout << "Add operation" << std::endl;
		std::cout << "Result: " << calc.result << std::endl;
	}
	else if (calc.operation == '-')
	{
		calc.result = calc.num1 - calc.num2;
		std::cout << "Subtract operation" << std::endl;
		std::cout << "Result: " << calc.result << std::endl;
	}
	else if (calc.operation == '*')
	{
		calc.result = calc.num1 * calc.num2;
		std::cout << "Multiply operation" << std::endl;
		std::cout << "Result: " << calc.result << std::endl;
	}
	else if (calc.operation == '/')
	{
		if (calc.num2 != 0)
		{
			calc.result = calc.num1 / calc.num2;
			std::cout << "Divide operation" << std::endl;
			std::cout << "Result: " << calc.result << std::endl;
		}
		else
		{
			std::cout << "Error: Division by zero is not allowed." << std::endl;
		}
	}
	else
	{
		std::cout << "Error: Invalid operation." << std::endl;
	};
	return 0;
}
	 
