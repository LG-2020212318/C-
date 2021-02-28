#include<iostream>
#include<math.h>
using namespace std;
int main ( ){
	int x;
	cout << "请输入x的值(x的值不为0）";
	cin >> x;
	cout << sin(x) + cos(x) + 1 / tan(x);
	return 0;
}