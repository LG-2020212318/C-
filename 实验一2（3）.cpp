#include<iostream>
using namespace std;
void main() {
	int n;
	cin >> n;
	if (n++ < 10)
		cout << n << endl;
	else
		cout << n--<< endl;//�����ܣ�����һ������ԭ�������ϼ�һ�����
}