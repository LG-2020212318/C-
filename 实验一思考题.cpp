#include<iostream>
using namespace std;
int main() {
	float x;
	int y, z, i,h,j;
	cout << "请输入小于1且只有三位尾数的实数"<<endl;
	cin >> x;
	y = 0; z = x * 10;
	i = x * 1000;//将小数转化为整数
	h = i/10 % 10;
	j = i % 10;
	cout << y << "  " << z << "  " << h << "  " << j;
	return 0;
}