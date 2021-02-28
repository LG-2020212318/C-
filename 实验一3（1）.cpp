#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float r,Area,C;
	float pi;
	pi =3.14;
	cout << "请输入圆的半径值";
	cin >> r;
	Area = pi * (r * r);
	C = 2 * pi * r;
	cout << "圆的面积为" << Area<<endl;
	cout << "圆的周长为" << C ;
	return 0;
	
	

}