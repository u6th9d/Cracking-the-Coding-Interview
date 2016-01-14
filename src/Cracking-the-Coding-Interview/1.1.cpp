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
	static bool test(const std::string& str = "") {
		if (str.length() < 2) {
			return true;
		}
		std::string str_copy(str);
		std::sort(str_copy.begin(), str_copy.end());
		return verify(str_copy.cbegin(), str_copy.cend());
	}
private:
	static bool verify(std::string::const_iterator beg, std::string::const_iterator end) {
		for (decltype(beg) curr = beg + 1; curr != end; ++curr) {
			if (*(curr - 1) == *curr) {
				return false;
			}
		}
		return true;
	}
};

int main() {
	std::cout << Test::test() << std::endl;
	std::cout << Test::test(std::string("u6th9d")) << std::endl;
	std::cout << Test::test(std::string("Hello World!")) << std::endl;

	system("pause");
}