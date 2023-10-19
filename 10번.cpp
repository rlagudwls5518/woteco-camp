#include <iostream>
#include <cstring>
using namespace std;


class Add
{
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Add::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Add::calculate()
{
	return a + b;
}

class Sub
{
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Sub::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Sub::calculate()
{
	return a - b;
}

class Mul
{
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Mul::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Mul::calculate()
{
	return a * b;
}

class Div
{
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};
void Div::setValue(int x, int y)
{
	a = x;
	b = y;
}
int Div::calculate()
{
	return a - b;
}


int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int first = 0; 
	int second = 0;
	char inputData = 0;
	while (1)
	{
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> first, second, inputData;

		switch (inputData)
		{
		case '+':  
		{
			a.setValue(first,second);
			cout << a.calculate() << endl;
			
		}
		case '-':
		{
			s.setValue(first, second);
			cout << s.calculate() << endl;
		}
		case '*':
		{
			m.setValue(first, second);
			cout << m.calculate() << endl;
		}
		case '/':
		{
			d.setValue(first, second);
			cout << d.calculate() << endl;
		}

		default:
			break;
		}
	}

}
