#include<iostream>
using namespace std ;

int base=1e9+7;
int n, a, t;

void Init(){
	cin >> a >> n;
}

int pow(int a, int n)
{
    if(n == 1) {
        return a;
    } else {
        int temp = pow(a, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
            return temp * temp * a;
    }
}
 main (){
 	cin >> t;
 	for(int i = 1;i <= t; i++){
 	Init();
 	cout << pow(a , n)<< endl;
 }
 }
