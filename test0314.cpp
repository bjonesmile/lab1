#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	n=atoi(argv[1]);
	cout<<n<<" ";
	while(n!=1)
	{
		if(n%2==0)
		n=n/2;
		else
		n=3*n+1;
		cout<<n<<" ";
	}
	cout<<endl;
	return 0;
}
