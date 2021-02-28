#include<iostream>
using namespace std;
void main() {
	int n;
	cin >> n;
	if (n++ < 10)
		cout << n << endl;
	else
		cout << n--<< endl;//程序功能：输入一个数在原数基础上加一并输出
}