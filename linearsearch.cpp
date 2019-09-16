#include <vector>
#include <iostream>

bool linearSearch(const std::vector<int>& set, int value)
{
	unsigned int i;
	for(i = 0; i < set.size(); i++)
	{
		if (set[i] == value)
		{
			std::cout << "the value: " << set[i] << " is in the array" << std::endl;
			return true;
		}
	}
		
		
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
	const int *i;
	for(i = begin; i < end; i++)
	{
		if ( *i == value)
		{
			std::cout << "the value:" << i << "is in the array" << std::endl;
			return true;
		}
	}

	return false;
}
