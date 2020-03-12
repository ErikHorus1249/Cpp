#include<iostream>
#include <cstring>
using namespace std;

string d;
int OK = 1,  n, t, k,  a[80];

void Result(){
	for(int i=0; i<n; i++){
		cout << a[i];
	}
}

void Hoanvi(){
    cin >> d;
    n = d.length();
    for(int i = 0; i<n; i++){
		a[i] = d[i]-'0';
	}
    int i = n - 2;
    while(i > 0 && a[i] >= a[i + 1]){
        i--;
    }
    if(i > 0){
        int k = n - 1;
        while(a[i] >= a[k]){
            k --;
        }
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;
        int r = i + 1;
        int s = n - 1;
        while (r <= s){
            int temp1 = a[r];
            a[r] = a[s];
            a[s] = temp1;
            r++;
            s--;
        }
        OK = 1;
    }
    else{
        OK = 0;
    }

    if(OK == 1){
            Result();
        }
        else{
            cout << "BIGGEST";
        }
}

int main(){
    int stt;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> stt;
        cout << stt << " ";
        Hoanvi();
        cout << endl;

    }

    return 0;
}
