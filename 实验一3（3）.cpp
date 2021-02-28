#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x,y,z,m,h;
	cout << "请输入x的值(四位数）";
	cin >>x;
	y = x / 1000;
	z = x % 1000 / 100;
	m = x % 1000 % 100 / 10;
	h = x % 1000 % 100 % 10;
	cout <<h<<m<<z<<y;
	return 0;

}