#include <iostream>
using namespace std;
class CSTACK
{
private:
	char *A;
	int size;
	int index;
public:
	CSTACK(int s) {
		size = s;
		index = 0;
		A = new char[size];
	}

	~CSTACK() {
		delete[] A;
	}
	bool isEmpty()
	{
		if (0  >= index) return true;
		else return false;
	}
	bool isFull()
	{
		if (size <= index) return true;
		else return false;
	}
	bool push(char data)
	{
		if (isFull()) return false;
		else
		{
			A[index] = data;
			index = index + 1;
			return true;
		}
	}

	bool pop(char& data)
	{
		if (isEmpty()) return false;
		else
		{
			index--;
			data = A[index];
			return true;
		}
	}

	void show()
	{
		int i;
		for (i = 0; i < index; i++)
			cout << A[i];
		cout << endl;

	}

};
int main()
{
	char data;
	CSTACK s1(1000);
	CSTACK s2(80);
	s1.push('a'); s1.show();
	s2.push('X'); s2.show();
	s1.push('b'); s1.show();
	s1.pop(data); s1.show();
	s1.push('c'); s1.show();
	s2.push('Y'); s2.show();
	s1.push('d'); s1.show();
	
}