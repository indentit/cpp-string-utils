#include "string_utils.h"
#include <iostream>
#include <string>
#include <vector>

using namespace string_utils;

int main(void)
{
	std::string test_str = "session_token2=aaaa; session_token=1667995240";
	StringUtils str_utils;
	std::vector<std::string> substrings = str_utils.split(test_str, ';');

	std::cout << test_str << "\n";
	//std::cout << substrings[0];
	
	// iterate through vector
	for (auto p = substrings.begin(); p != substrings.end(); ++p) {
		std::cout << *p << "\n";
		str_utils.trim(*p);
		std::cout << *p << "\n";
	}
	
	substrings = str_utils.split(test_str, "; ");
	// iterate through vector
	for (auto p = substrings.begin(); p != substrings.end(); ++p) {
		std::cout << *p << "\n";
	}

	return 0;
}
