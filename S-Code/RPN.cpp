#include <iostream>
using namespace std;

const int MAX = 405;

// Tr? v? true n?u kí t? ch là toán h?ng
bool IsOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

// Tr? v? true n?u kí t? ch là toán t?
bool IsOperator(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') return true;
	return false;
}

// Tr? v? ð? ýu tiên cho các toán t?
int GetPriority(char ch)
{
	if(ch == '+') return 1;
	if(ch == '-') return 2;
	if(ch == '*') return 3;
	if(ch == '/') return 4;
	if(ch == '^') return 5;
	return -1;
}

// Tr? v? ð? dài xâu str
int GetLength(char *str)
{
	int length = 0;
	while(str[length] != '\0') length++;
	return length;
}

int main()
{
	ios::sync_with_stdio(false);
	freopen("input.txt","r",stdin);

	int T = 0;
	char str[MAX];

	cin >> T;
	for(int tc = 0; tc < T; tc++)
	{
		cin >> str;
		int length = GetLength(str);

		char *stack = new char[length + 1];
		int st_size = 0;

		// Th?c hi?n theo thu?t toán
		for(int i = 0; i < length; i++)
		{
			if(IsOperand(str[i]))
			{
				cout << str[i];
			}
			else if(str[i] == '(') 
			{
				stack[st_size++] = str[i];
			}
			else if(str[i] == ')')
			{
				while (stack[st_size-1] != '(')
				{
					cout << stack[st_size-1];
					st_size--;
				}
				st_size--;
			}
			else if(IsOperator(str[i]))
			{
				while(IsOperator(stack[st_size-1]) && 
				        (GetPriority(stack[st_size-1]) >= GetPriority(str[i])))
				{
					cout << stack[st_size-1];
					st_size--;
				}

				stack[st_size] = str[i];
				st_size++;
			}
		}
		cout << endl;
		delete[] stack;
	}
	return 0;
}
