/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2015-11  All rights reserved
*
**********************************************/

#include <cstring>
#include <string>
#include <iostream>

class Test {
public:
	static std::string test(const std::string& str) {
		const char* cstr = str.c_str();
		char* str_base = new char[str.length() * 2 + 1];
		memset(str_base, '\0', str.length() * 2 + 1);
		const char* next = cstr;
		char* curr = str_base;
		while (*next != '\0') {
			char ch = *next++;
			int cnt = 1;
			while (*next == ch) {
				next++;
				cnt++;
			}
			*curr++ = ch;
			sprintf(curr, "%d", cnt);
			while (*curr != '\0') {
				curr++;
			}
		}
 		std::string str_ret((strlen(str_base) < str.length()) ? str_base : cstr);
		delete[] str_base;
		return str_ret;
	}
};

int main() {
	std::cout << Test::test("u6th9d") << std::endl;
	std::cout << Test::test("aabcccccaaa") << std::endl;
	std::cout << Test::test("Hello World!") << std::endl;

	system("pause");
}