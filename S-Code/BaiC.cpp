#include <iostream>
#include <deque>
#include <cstring>
using namespace std;
 

 
int main(){
	deque <int> st;
	int gtri, t;
	string a;
    cin >> t;
    while (t--){
        cin >> a;
        if(a == "PUSHBACK"){
            cin >> gtri;
            st.push_back(gtri);
        }
        else if(a == "POPBACK"){
            if(!st.empty()){
                st.pop_back();
            }
        }
       else if(a == "PUSHFRONT"){
                cin >> gtri;
                st.push_front(gtri);
        }
        else if(a == "POPFRONT"){
            if(!st.empty()){
                st.pop_front();
            }
        }
        else if (a == "PRINTFRONT"){
            if(st.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << st.front() << endl;
            }
        }
        else{
            if(st.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << st.back() << endl;
            }
        }
    }
    return 0;
}
