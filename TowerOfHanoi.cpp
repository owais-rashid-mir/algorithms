#include<iostream>
using namespace std;

void TOH(int n, char source, char aux, char des)
{ 
	if(n==1)
	{
		cout<<"Move Disk " << n << " from " << source << " to " << des << endl;
		return;
	}
	
	TOH(n-1, source, des, aux);
	cout << "Move Disk " <<n << " from " << source << " to " << des << endl;
	TOH(n-1, aux, source, des);
}

int main()
{ 
	int n;
	cout<<"Enter the number of disks:";	
	cin>>n;

	TOH(n,'A','B','C');     //Function call
	
	return 0;
}