#pragma once

#include <string>
#include <vector>

namespace string_utils {

	class StringUtils {

		public:

			std::vector<std::string> split(std::string in_str, char split_char);
			
			std::vector<std::string> split(std::string in_str, const char *split_str);

			void trim(std::string& str);

			int float2char(char* s, float value, int precision);
	};

}
