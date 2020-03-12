#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>S;
	string s;
	int t;
	cin>>t;
	while(t--){
	cin>>s;
	if(s=="PUSH"){
		int x;
		cin>>x;
		S.push(x);	
	}
	if(s=="PRINT"){
		if(S.empty())
			cout<<"NONE"<< endl;
		else{
			cout<<S.top()<<endl;
		}
	}
	if(s=="POP")
		if(!S.empty())
			S.pop();
	}
}		
