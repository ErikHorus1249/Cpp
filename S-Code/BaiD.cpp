#include <iostream>
#include <queue>
#include <vector>
int pow10[4] = {1, 10, 100, 1000};
using namespace std ;
vector<bool> primes(100000, 1) ;
void sieve(){
    primes[0] = false ;
    primes[1] = false ;
    for (int i = 2; i * i <= 100000; i ++) {
        if (primes[i] == true) {
            for (int j = i + i; j <= 100000; j += i)
                primes[j] = false;
        }
    }
}
bool pushPrimes(queue<int> &q, int end, int pos, int top, int extract){
    top -= extract * pow10[pos] ;
    for (int i = (pos == 3); i <= 9; i ++) {
        if (i != extract) {
            int push = top + i * pow10[pos];
            if (push == end) return true;
            if (primes[push] == true)
                q.push(push);
        }
    }
    return false ;
}
int noOfSteps(int start, int dest){
    int c = 0 ;
    if (start == dest) return 0 ;
    queue<int> q ;
    q.push(start) ;
    int prev_size = 1 ;
    while (!q.empty()){
        int top = q.front() ;
        q.pop() ;
        int temp = top ;
        for (int i = 0; i < 4; i ++) {
            int extract = temp % 10;
            temp /= 10;
            if (pushPrimes(q, dest, i, top , extract))
                return c + 1 ;
        }
        if (-- prev_size == 0) {
            c++;
            prev_size = q.size();
        }
    }
    return -1 ;
}
int main() {
    sieve() ;
    int t ;
    cin >> t ;
    while (t --){
        int start, dest ;
        cin >> start >> dest ;
        cout << noOfSteps(start, dest) << endl ;
    }
    return 0;
}
