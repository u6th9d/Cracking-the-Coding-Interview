/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2015-11  All rights reserved
*
**********************************************/

/*******************************************************
	请实现一个函数 把字符串中的每一个空格替换成“%20”
*******************************************************/

class Test {
public:
	static std::string test(const std::string& str) {
		int cnt = 0;
		for (auto ch : str) {
			if (isspace(ch)) {
				cnt++;
			}
		}
		std::string str_ret(str.length() + 2 * cnt, '\0');
		auto curr = str_ret.begin();
		auto next = str.cbegin();
		while (next != str.cend()) {
			if (isspace(*next)) {
				*curr++ = '%';
				*curr++ = '2';
				*curr++ = '0';
			} else {
				*curr++ = *next;
			}
			next++;
		}
		return str_ret;
	}
};

void test() {
	std::cout << Test::test(std::string("   ")) << std::endl;
	std::cout << Test::test(std::string("u6th9d")) << std::endl;
	std::cout << Test::test(std::string(" Hello World ! ")) << std::endl;
}