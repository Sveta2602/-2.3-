#include "_3d_Vector.h"
#include <iostream>



using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	_3dVector v, v1(7, 5, 9);
	cout << "ввести зминни Вектора v=" << endl;
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
		cout << "  довжина вектора v=" << v.Length() << "бильша  за довжину вектора  v1=" << v1.Length() << endl;
	else
		cout << "  довжина вектора  v=" << v.Length() << "менша  за довжину вектора v1 =" << v1.Length() << endl;
	
	cout << "--------------------------------------------------"<<endl;
	v3 = v1 * 2;
	cout <<" Multiply -множення вектора v1 на скаляр ="<< v3 ;
	cout << "--------------------------------------------------" << endl;
	
	
	 
	cin.get();
	return 0;
}