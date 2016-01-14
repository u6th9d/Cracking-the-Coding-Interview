/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2015-11  All rights reserved
*
**********************************************/

#include <string>
#include <iostream>
#include <algorithm>

class Test {
public:
	static bool test(const std::string& str1, const std::string& str2) {
		if (str1.length() != str2.length()) {
			return false;
		}
		std::string str1_copy(str1), str2_copy(str2);
		std::sort(str1_copy.begin(), str1_copy.end());
		std::sort(str2_copy.begin(), str2_copy.end());
		return (strcmp(str1_copy.c_str(), str2_copy.c_str()) == 0);
	}
};

int main() {
	std::cout << Test::test(std::string("u6th9d"), std::string("hahaha")) << std::endl;
	std::cout << Test::test(std::string("hello world"), std::string("dlrlo loweh")) << std::endl;

	system("pause");
}