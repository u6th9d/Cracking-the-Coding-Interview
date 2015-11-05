/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2015-11  All rights reserved
*
**********************************************/

#include <iostream>
#include <cstring>

class Test {
public:
	static void reverse(char* str) {
		size_t len;
		if (str == nullptr || (len = strlen(str)) < 2) {
			return;
		}
		char* beg = str;
		char* end = str + len - 1;
		while (beg < end) {
			swap(beg++, end--);
		}
	}
private:
	static void swap(char* lhs, char* rhs) {
		char tmp = *lhs;
		*lhs = *rhs;
		*rhs = tmp;
	}
};

int main() {
	char buf1[] = "u6th9d";
	char buf2[] = "Hello World";
	Test::reverse(buf1);
	Test::reverse(buf2);
	std::cout << buf1 << std::endl;
	std::cout << buf2 << std::endl;

	system("pause");
}