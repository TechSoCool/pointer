#include <iostream>
using namespace std;

void arraypointer()
{

	int val[3] = { 5, 10, 20 };
	int* ptr;

	ptr = val;
	cout << "Elements of the array are: " << endl;
	cout << "\t " << ptr[0] << "\t" << ptr[1] << "\t" << ptr[2] << endl;
}

int main()
{

	arraypointer();
	system("pause");

}