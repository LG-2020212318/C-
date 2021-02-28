#include<iostream>
#include<math.h>
using namespace std;
int main ( ){
	int x;
	cout << "ÇëÊäÈëxµÄÖµ";
	cin >> x;
	cout << sqrt(1 + 1 / (x + (1 / (x + 1))));
	return 0;

}
