// printPrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int checkPrimeNumber(int n) {
	int i;
	for ( i = 2; i <= (int)sqrt(n);i++) 
		if (n%i == 0) return 0;//如果有约数，返回0
	return 1;
}

int main()
{
	int totalnum = 100;
	//遍历
	for (int i = 2; i <= totalnum; i++) 
		if (checkPrimeNumber(i))//如果是素数
			cout << i <<endl;

	
	return 0;
}

