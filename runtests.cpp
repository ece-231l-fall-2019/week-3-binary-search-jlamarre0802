#include <iostream>
#include <fstream>
#include <vector>
#include "Timer.h"
#include "search.h"
#include <string>

void read(std::string filename, std::vector<int>& c)
{
	std::ifstream d(filename);
	while(true)
	{
		int name;
		d >> name;
		if (d.eof())
			break;
		c.push_back(name);
	}
	d.close();
}


int main()
{
 	std::vector<int> numbers;
	 std::vector<int> search;
	 numbers.reserve(1000000);
	 search.reserve(2000);
	 read("numbers", numbers);
	 read("search", search);


	 {
		 Timer timer("Time to Linear search all values: ");

		 int found = 0;
		 for(size_t i = 0; i< search.size(); i++)
		 {
		 	if (linearSearch(numbers, search[i]))
		
				found++;
		 }
	 
	 	std::cout<< "Found " << found << "/" << search.size() << " Values." << std::endl;
	 }
	
 	 {
 		 Timer timer("time to leaner seach all values (Pointers): ");
       	 
 	 	int found = 0;
	 	for (size_t i = 0; i <search.size(); i++)
	 	{
			if (linearSearch(numbers.data(),numbers.data() + numbers.size(), search[i]))
	       			found++;
	 	}	
		std::cout << "Found " << found << "/" << search.size() << " Values." << std::endl;	
	}

	{
		Timer timer("Time to do binary search all values:");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
		}
		std::cout << "Found" << found << "/" << search.size() << " values." << std::endl;

	}

	{
		Timer timer( "Time to binary search all values (pointers): " );
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}	
		std::cout << "Found" << found << "/" << search.size() << " values." << std::endl;
	}

	return 0;

}

