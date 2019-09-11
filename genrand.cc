#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char **argv)
{

	int num = 2000000;
	int max = 8000000;

	if (argc > 1)
		num = std::atoi(argv[1]);
	if (argc > 2)
		max = std::atoi(argv[2]);

	std::srand(std::time(NULL));
	for (int i = 0; i < num; i ++)
		std::cout << std::rand() % max << std::endl;

	return 0;
}
