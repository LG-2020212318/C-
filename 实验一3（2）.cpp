#include<iostream>
using namespace std;
int main() {
	int a, b, c,temp;
	a = 1; b = 2; c = 3;
	temp=a;
	a = b; b = c; c = temp;
	cout << a << b  << c;

	return 0;
}