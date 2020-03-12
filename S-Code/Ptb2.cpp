#include<iostream>
#include<cmath>
using namespace std;


void ptb2( float a , float b , float c ){
	if(a == 0){
		if(b == 0){
			if(c == 0) cout << "Phuong trinh vo so nghiem !"<< endl;
			else cout << "Phuong trinh vo so nghiem !"<<endl;
		}
		cout << (- c/b) << endl;
	}
	float delta, x1, x2;
	delta = b * b - 4 * a * c;
	if(delta < 0) cout << "Phuong trinh vo nghiem !";
	else{
	if(delta = 0) cout << (-b / 2*a);
	else{
		x1 = (- b + sqrt(delta)/(2*a));
		x2 = (- b - sqrt(delta)/(2*a));
		
		cout << x1 << " "<< x2;
	}
}
}
main(){
	float a,b,c;
	cin >> a >> b >>c;
	
	 ptb2(a,b,c);
	return 0;
	
}
