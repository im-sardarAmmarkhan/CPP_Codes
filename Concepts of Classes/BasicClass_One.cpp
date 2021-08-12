#include<iostream>
using namespace std;

class Number{
	private:
		//These are global scope varriables. . . 
		int sum = 0;
		int a =10;
		int b = 5;
	public: 
		void Sum(int myFirstValue, int mySecondValue)
		{
			//scope of the a and b varriable local. . . 
			int a;
			int b;
			a = myFirstValue;
			b = mySecondValue;
			sum = a+b;
			cout<<sum<<endl;
		}
		
		void Sub()
		{
			int a,b;
			a = 100;
			b = 55;
			sum = a-b;
			cout<<sum;
		}
};

//Main Program. . . . .
int main()
{
	Number obj;
	obj.Sum(5,6);
	obj.Sub();
}
