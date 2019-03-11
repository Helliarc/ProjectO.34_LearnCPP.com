#include<iostream>

int main()
{
	int x{};
	bool inBigClassroom{ true };
	const int classSize = inBigClassroom ? 30 : 20;
	std::cout << "The class size is: " << classSize;
	std::cin >> x;


	return 0;
}