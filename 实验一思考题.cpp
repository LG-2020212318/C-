#include<iostream>
using namespace std;
int main() {
	float x;
	int y, z, i,h,j;
	cout << "������С��1��ֻ����λβ����ʵ��"<<endl;
	cin >> x;
	y = 0; z = x * 10;
	i = x * 1000;//��С��ת��Ϊ����
	h = i/10 % 10;
	j = i % 10;
	cout << y << "  " << z << "  " << h << "  " << j;
	return 0;
}