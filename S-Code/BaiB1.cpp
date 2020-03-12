#include <iostream>
#include <queue>
using namespace std;
int main(){
	long n,z = 0;
	int b[100000];
	string lenh;
	queue<int> ds;
	cin >> n;
	for(int i = 0; i < n;i+=1){
		cin >> lenh;
		if(lenh == "PUSH"){
			int a;
			cin >> a;
			ds.push(a);
		}else if(lenh == "POP"){
			if(!ds.empty())
				ds.pop();
		}else if(lenh == "PRINTFRONT"){
			if(!ds.empty()){
				b[z] = ds.front();
				z++;
			}else{
				b[z] = -1;
				z+=1;
			}		
		}
	}
	for(int j=  0;j<z;j+=1)
		if(b[j] != -1){
			cout << b[j] << endl;
		}else
			cout << "NONE"<<endl;
	return 0;
}
