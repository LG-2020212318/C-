#include <iostream>
using namespace std;
void main() {
	int m;
	float x;
	bool bi, br;


	cout<< "\n int m=";
	cin >> m;
	bi = m > 1000;
	cout << "\n float x=";
	cin >> x;
	br = x <= 1e3;//1e3����1*10^3
	cout << bi << ',' << br << endl;//�������жϵ�һ����������Ƿ����1000�������Ϊ�����1�����0
	//�ڶ�����������Ƿ�С�ڵ���1000��������Ϊ�����1�������0


}