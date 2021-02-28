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
	br = x <= 1e3;//1e3代表1*10^3
	cout << bi << ',' << br << endl;//程序功能判断第一次输入的数是否大于1000如大于则为真输出1假输出0
	//第二次输入的数是否小于等于1000如满足则为真输出1，假输出0


}