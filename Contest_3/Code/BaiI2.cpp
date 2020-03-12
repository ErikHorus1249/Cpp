#include <iostream>
 
using namespace std;
 
const int size = 20;
 
int maxE = 100;
int maxC = size * maxE;
int C[size][size];
int X[size+1];
int T[size];
int BestWay[size+1];
bool FREE[size];
int MIN;
int N;
 
void input()
{
 
    int i,j,k;
    cin >> N;
    for ( i = 1; i <= N; i++ )
    {
        for ( j = 1; j <= N; j++ )
        {
            cin >> C[i][j];
        }
    }
}
 
void init()
{
    for ( int i = 0; i <= N; i++ )
        FREE[i] = true;
    FREE[1] = false;
    X[1] = 1;
    T[1] = 0; 
    MIN = maxC;
}
 
void output()
{
    if (MIN == maxC )
        cout << "NO SOLUTION ";
    else
    {
        cout << MIN;
    }
}
 
void tim(int i)
{
    for ( int j = 2; j <= N; j++ )
    {
        if (FREE[j])
        {
            X[i] = j;
            T[i] = T[i-1] + C[X[i-1]][j];
            if ( T[i] < MIN )
            {
                FREE[j] = false;
                if(i == N)
                {
                    if ( ( T[N] + C[X[N]][1] ) < MIN )
                    {
                        MIN = T[N] + C[X[N]][1];
                    }
                }
                else tim( i + 1 ); 
                FREE[j] = true;  
            }
        }
    }
}
 
int main()
{
    input();
    init();
    tim(2);
    output();
}
