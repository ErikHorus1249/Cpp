#include<bits/stdc++.h>

using namespace std;
 
typedef int item; 
struct Node
{
    item Data;
    Node * Next;
};
struct Queue
{
    Node * Front, *Rear; 
    int count; 
};
 
void Init (Queue &Q); 
int Isempty(Queue Q); 
void Push(Queue &Q, item x); 
int Pop(Queue &Q); 
int Qfront (Queue Q); 
Node *MakeNode(item x); 

 
void Init(Queue &Q)
{
    Q.Front = Q.Rear = NULL;
    Q.count = 0;
}
int Isempty (Queue Q) 
{
    if (Q.count == 0) 
        return 1;
    return 0;
}
 void sizeQ(Queue Q){
 	cout << Q.count<<endl;
 }
 
Node *MakeNode(item x) 
{
    Node *P = (Node*) malloc(sizeof(Node));
    P->Next = NULL;
    P->Data = x;
    return P;
}
 
void Push(Queue &Q, item x) 
{
    Node *P = MakeNode(x); 
    if (Isempty(Q))
    {
        Q.Front = Q.Rear = P; 
    }
    else 
    { 
        Q.Rear->Next = P;
        Q.Rear = P;
    }
    Q.count ++ ; 
}
 
int Pop(Queue &Q) 
{
    if (Isempty(Q)) 
    {
        return 0;
    }
    else
    {
        item x = Q.Front->Data;
        if (Q.count == 1) 
            Init(Q);
        else
            Q.Front = Q.Front->Next;
        Q.count --;
        return x; 
    }
}
int OUTF(Queue Q){
	Node *P = Q.Front;
	if(Isempty(Q)) return -1;
	return P -> Data ;
}

int OUTL(Queue Q){
	Node *P = Q.Rear;
	if(Isempty(Q)) return -1;
	return P -> Data;
}

 int main()
{
    Queue Q;
    Init(Q);
    int k,Dem = 0;
    int Choose;
    cin >> k;
    do
    {
    
       cin >> Choose;
       Dem ++;
       
        switch (Choose)
        {
        	case 1:
        	{
        		sizeQ(Q);
        		break;
			}
            case 2:
            {
                if (Isempty(Q)) cout << "YES"<<endl;
                else cout << "NO"<<endl;
                break;
            }
            case 3:
            {
                item x;
                cin >> x;
                Push(Q,x);
                break;
            }
            case 4:
            {
                Pop(Q);
                break;
            }
            case 5: 
            {
                cout << OUTF(Q)<<endl;
                break;
            }
            case 6:
            {
            	cout << OUTL(Q) << endl;
				break;		
			}
        }
    }while (Dem != k );
    return 0;
}
