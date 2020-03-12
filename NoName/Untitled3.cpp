#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void hoa(char b[80])
{
if(b[0]>='a'&&b[0]<='z')
{
b[0]=b[0]-32;
}
}
void tach(char xau[80])
{
char s[50][50];
char *p=strtok(xau," ");
int i=0;
while(p!=NULL)
{
strcpy(s[i],p);
p=strtok(NULL," ");
i++;
}
for(int j=0;j<i;j++)
{
    strlwr(s[j]);
    hoa(s[j]);
}
for(int j=0;j<i;j++)
{
	cout<<s[j]<<" ";
}
cout<<endl;   
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
char xau[80][80];
int n;
cin>>n;
for(int i=0;i<=n;i++)
{
cin.getline(xau[i],80,'\n');
}
for(int i=0;i<=n;i++)
{
tach(xau[i]);
}
return 0;
}
