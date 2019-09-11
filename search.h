#ifndef __ECE231_SEARCH_H__
#define __ECE231_SEARCH_H__

// Binary search functions
bool binarySearch(const std::vector<int>& set, int value);
bool binarySearch(const int *begin, const int *end, int value);

// Linear search functions
bool linearSearch(const std::vector<int>& set, int value);
bool linearSearch(const int *begin, const int *end, int value);

#endif // __ECE231_SEARCH_H__
