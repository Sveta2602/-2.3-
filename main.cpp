#include "_3d_Vector.h"
#include <iostream>



using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	_3dVector v, v1(7, 5, 9);
	cout << "������ ������ ������� v=" << endl;
	cin >> v;
	cout << v << endl << endl;
	_3dVector v3;
	cout << "v1 = " << v1 << endl;
	v3 = ++v1;
	cout << "v3 = ++v1: \n" << "v1 = " << v1 << "v3 = " << v3 << endl;

	v3 = --v1;
	cout << "v3 = --v1: \n" << "v1 = " << v1 << "v3 = " << v3 << endl;
	v3 = v1++;
	cout << "v3 = v1++: \n" << "v1 = " << v1 << "v3 = " << v3 << endl;
	v3 = v1--;
	cout << "v3 = v1--: \n" << "v1 = " << v1 << "v3 = " << v3 << endl;
	cout << "--------------------------------------------------" << endl;
	
	if (v.Length()>v1.Length())
		cout << "  ������� ������� v=" << v.Length() << "������  �� ������� �������  v1=" << v1.Length() << endl;
	else
		cout << "  ������� �������  v=" << v.Length() << "�����  �� ������� ������� v1 =" << v1.Length() << endl;
	
	cout << "--------------------------------------------------"<<endl;
	v3 = v1 * 2;
	cout <<" Multiply -�������� ������� v1 �� ������ ="<< v3 ;
	cout << "--------------------------------------------------" << endl;
	
	
	 
	cin.get();
	return 0;
}