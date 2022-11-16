#include "string_utils.h"
#include <bits/c++config.h>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace string_utils;


std::vector<std::string> StringUtils::split(std::string in_str, char split_char)
{
	int i = 0;
	std::size_t len = in_str.length();
	std::vector<std::string> buffer;
	std::size_t last_pos = 0;

	while (i < len) {
		int pos = in_str.find(split_char, i);
		if (pos != std::string::npos) {
			buffer.push_back(in_str.substr(last_pos, pos - last_pos));
			last_pos = pos + 1;
			i = pos + 1;
		} else {
			if (last_pos < len) {
				buffer.push_back(in_str.substr(last_pos, len - 1));
			}
			i = len + 1;
		}
	}

	return buffer;
}


std::vector<std::string> StringUtils::split(std::string in_str, const char *split_str)
{
	int i = 0;
	std::size_t len = in_str.length();
	std::vector<std::string> buffer;
	std::size_t last_pos = 0;
	std::string tmp = split_str;

	while (i < len) {
		int pos = in_str.find(split_str, i);
		if (pos != std::string::npos) {
			buffer.push_back(in_str.substr(last_pos, pos - last_pos));
			last_pos = pos + tmp.length();
			i = pos + 1;
		} else {
			if (last_pos < len) {
				buffer.push_back(in_str.substr(last_pos, len - 1));
			}
			i = len + 1;
		}
	}

	return buffer;
}


void StringUtils::trim(std::string& str)
{
	std::size_t pos = str.find_first_not_of(' ');
	str = str.substr(pos);
	pos = str.find_last_not_of(' ');
	str = str.substr(0, pos + 1);
}



int StringUtils::float2char(char* s, float value, int precision)
{
    int a = value;
    int base = 1;

    for (int i=0; i<precision; i++) {
        base = base * 10;
    }

    int b = value * base;
    int c = b-(a*base);

    std::string str = std::to_string(a);
    str += ".";
    str += std::to_string(c);

    std::strcpy(s, str.c_str());

    
    return 0;
}

