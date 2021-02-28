#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x, y;
	cout << "ÇëÊäÈëx£¬yµÄÖµ"<<endl;
	cin>> x >> y;
	cout << exp(x + y) + exp( x - y);
	return 0;
}
