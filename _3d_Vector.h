
#pragma once
#include <string>
using namespace std;
class  _3dVector
{
	unsigned int x, y, z;
public:
	unsigned Get_X() const { return x; }
	unsigned Get_Y() const { return y; }
	unsigned Get_Z() const { return z; }
	void Set_X(unsigned value);
	void Set_Y(unsigned value);
	void Set_Z(unsigned value);
	_3dVector();
	_3dVector(unsigned int, unsigned int, unsigned int);
	_3dVector(const _3dVector&);
	operator string() const;
	_3dVector& operator ++();
	_3dVector& operator --();
	_3dVector& operator ++(int);
	_3dVector& operator --(int);
	_3dVector& operator *(int N);
	
	double Length();
	
	friend ostream& operator <<(ostream&, const _3dVector&);
	friend istream& operator >>(istream&, _3dVector&);
};

