/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2016-01  All rights reserved
*
**********************************************/

/*********************************************************
	在一个二维数组中，每一行都按从左到右递增的顺序排列 每
	一列都按从上到下递增的顺序排列 请完成一个函数 输入这样
	的一个二维数组和一个整数 判断数组中是否含有该整数
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
