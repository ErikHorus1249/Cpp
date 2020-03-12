#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1,x2,x3,y1,y2,y3;
	cout << "Nhap vao toa do A :"<<endl;
	cin >> x1;
	cin >> y1;
	cout << "Nhap vao toa do B :"<<endl;
	cin >> x2;
	cin >> y2;
	cout << "Nhap vao toa do C :"<<endl;
	cin >> x3;
	cin >> y3;
	cout << "Toa do A : "<<x1<<" "<<y1<<endl;
	cout << "Toa do B : "<<x2<<" "<<y2<<endl;
	cout << "Toa do C : "<<x3<<" "<<y3<<endl;
	if((x2+x3)/2==x1){
	if((y2+y3)/2==y1){
		cout << "A la trung diem cua BC"<<endl;
		}
	}
	else{
		cout << "A ko phai trung diem cua BC"<<endl;
	}
	return 0;
}
	
