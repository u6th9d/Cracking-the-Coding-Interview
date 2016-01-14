/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2016-01  All rights reserved
*
**********************************************/

/*********************************************************
	��һ����ά�����У�ÿһ�ж��������ҵ�����˳������ ÿ
	һ�ж������ϵ��µ�����˳������ �����һ������ ��������
	��һ����ά�����һ������ �ж��������Ƿ��и�����
**********************************************************/

template <int M, int N>
bool find(int array[M][N], int num) {
	int i = M-1;
	int j = 0;
	while(i >= 0 && j < N) {
		if(num > array[i][j]) {
			j += 1;
		} else if(num < array[i][j]) {
			i -= 1;
		} else {
			return true;
		}
	}
	return false;
}

void test() {
	int arr[4][5] = {
		{1, 4, 6, 8, 11},
		{2, 5, 7, 9, 12},
		{3, 10, 13, 15, 22},
		{14, 19, 21, 23, 33}
	};
	std::cout << find<4, 5>(arr, 1) << std::endl;
	std::cout << find<4, 5>(arr, 22) << std::endl;
	std::cout << find<4, 5>(arr, 8) << std::endl;
}
