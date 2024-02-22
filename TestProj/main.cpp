#include <iostream>


int main()
{
	char var = 0;
	std::cout << "Hello world!" << var;

	int var2 = 1;
	std::cout << "va2 value: " << var2;

	int var3;
	std::cout << "Enter value";
	std::cin >> var3;

	if (var % 2 == 0)
	{
		std::cout << var << " can be divide to 2";
	}
	else
	{
		std::cout << var << " can't be divide to 2";
	}

	std::cout << "I have finished my homework!";

	return 0;
}