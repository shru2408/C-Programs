#include<iostream>
using namespace std;
class Swap
{ 
	int x,y;
	public:
	void getdata()
	{ 
		cin>>x>>y;
	}
	void showdata()
	{
	 cout<<"X="<<x<<"\tY="<<y;
	}
	friend void swapfunction(Swap&s);
};

void swapfunction(Swap&s)
{ 
    
	int temp;
	temp=s.x;
	s.x=s.y;
	s.y=temp;
}
int main()
{
	Swap s;
    system("CLS");
	cout<<"Input two numbers to swap:\n";
	s.getdata();
	cout<<"\nBefore swapping:\n";
	s.showdata();
	swapfunction(s);
	cout<<"\nAfter swapping:\n";
	s.showdata();
	return 0;
}