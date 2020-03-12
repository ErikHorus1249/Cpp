#include<iostream>
#include<queue>

using namespace std;

queue Q;
void Init (Queue &Q) //khoi tao Queue rong
{
    Q.Front = 0; //phan tu dau
    Q.Rear = -1; // phan tu cuoi o -1 (khong co phan tu trong Q)
    Q.count = 0; //so phan tu bang 0
}

void  Isempty (Queue Q) //kiem tra Queue rong
{
    if (Q.count == 0) //so phan tu = 0 => rong
        cout << "YES"<< endl;
    cout << "NO"<< endl;
}
 
/*int Isfull (Queue Q) //kiem tra Queue day
{
    if (Q.count == Max) //so phan tu = Max => day
        return 1;
    return 0;
}*/

void Push(Queue &Q, item x) //them phan tu vao cuoi Queue
{
    if (Isfull(Q)) return 0;// printf("Hang doi day !");
    else
    { 
        Q.Data[++Q.Rear] = x; //tang Rear len va gan phan tu vao
        Q.count++; //tang so phan tu len
    }
}

void Pop(Queue &Q) //Loai bo phan tu khoi dau hang doi
{
    if (Isempty(Q))  return 0;// printf("Hang doi rong !");
    else
    {
        item x = Q.Data[Q.Front];
        for (int i=Q.Front; i<Q.Rear; i++) //di chuyen cac phan tu ve dau hang
            Q.Data[i] = Q.Data[i+1];
        Q.Rear--; // giam vi tri phan tu cuoi xuong
        Q.count--;//giam so phan tu xuong
       // return x; //tra ve phan tu lay ra
    }
}

item Qfront (Queue Q) //xem thong tin phan tu dau hang
{
    if (Isempty(Q)) printf("Hang doi rong !");
    else return Q.Data[Q.Front];
}

main(){
	Init(Q);
	Outsize(Q);
	Isempty(Q);
	push(Q,x);
	
}
