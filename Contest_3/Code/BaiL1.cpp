#include <iostream>
 
using namespace std;
 
const int M = 15;
 
int maxE = 100;
int maxC = M * maxE;
int C[M][M];
int X[M + 1];
int T[M];
bool CROSS[M];
int MIN;
int N;
 
void input()
{
 
    int i,j;
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
        CROSS[i] = true;
    CROSS[1] = false;
    X[1] = 1;
    T[1] = 0; 
    MIN = maxC;
}

void tim(int i)
{
    for ( int j = 2; j <= N; j++ )
    {
        if (CROSS[j])
        {
            X[i] = j;
            T[i] = T[i-1] + C[X[i-1]][j];
            if ( T[i] < MIN )
            {
                CROSS[j] = false;
                if(i == N)
                {
                    if ( ( T[N] + C[X[N]][1] ) < MIN )
                    {
                        MIN = T[N] + C[X[N]][1];
                    }
                }
                else tim( i + 1 ); 
                CROSS[j] = true;  
            }
        }
    }
}
 
main()
{
    input();
    init();
    tim(2);
    cout << MIN <<endl;
}
