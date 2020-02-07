#include<iostream>
using namespace std;
void swap(char *x,char*y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void permute(char* w,int i,int n)
{
	int j ;
	if(i==n)
	cout<<w<<endl;
	else{
		for(j=i;j<=n;j++)
		{
			swap((w+i),(w+j));
			permute(w,i+1,n);
			swap((w+i),(w+j));
		}
	}
}
int main()
{
	int num;
	cout<<" Enter the no. of characters : " ;
	cin>>num;
	char m[100];
	char b = 'a';
	for(int i=0;i<num;i++)
	{
		m[i]=b;
		b++;
	}
	m[num]='\0';
	permute(m,0,num-1);
	return 0;
}
