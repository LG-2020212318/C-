#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x;
	cout << "������x��ֵ"<<endl;
	cin >> x;
	cout << log10(1 + sqrt(1 + x * x));
	return 0;
}