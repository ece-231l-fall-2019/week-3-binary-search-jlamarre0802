#include <vector>
#include <iostream>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	unsigned int end = set.size();
	unsigned int begin = 0;
	unsigned int mid;

	while (true)
	{
		mid = (end + begin)/2;
		if(mid == end)
		{
			return false;
		}
		if (set[mid] == value)
		{
			return true;
		}
		if(value > set[mid])
		{
			begin = mid + 1;
		}
		else 
		{
			end = mid;
		}

	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{

	while (true)
	{
		const int *mid = begin + (end - begin)/2;
		if(mid == end)
		{
			return false;
		}
		if (*mid == value)
		{
			return true;
		}
		if(value >*mid)
		{
			begin = mid + 1;
		}
		else 
		{
			end = mid;
		}
	}
	return false;
}
