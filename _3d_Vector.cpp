#include "_3d_Vector.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
void _3dVector::Set_X(unsigned value)
{
	x = value;
}
void _3dVector::Set_Y(unsigned value)
{
	y = value;
}
void _3dVector::Set_Z(unsigned value)
{
	z = value;
}
_3dVector::_3dVector()
{
	x = 0; y = 0; z = 0;
}
_3dVector::_3dVector(unsigned int x, unsigned int y, unsigned int z)
{
	Set_X(x); Set_Y(y); Set_Z(z);
}
_3dVector::_3dVector(const _3dVector& t)
{
	*this = t;
}
_3dVector::operator string() const
{
	stringstream sout;
	sout << setw(2) << "(" << x << ","
		<< setw(2) << y << "," << setw(2) << z << ")";
	return sout.str();
}
_3dVector& _3dVector::operator ++()
{
	++x;
	y++;
	++z;
	return *this;
}
_3dVector& _3dVector::operator --()
{
	
	x--;
	y--;
	z--;
	return *this;
}

_3dVector& _3dVector::operator++(int)
{
	_3dVector tmp = *this;
	++x;
	y++;
	++z;
	return tmp;
}

_3dVector& _3dVector::operator--(int)
{
	_3dVector tmp = *this;
	x--;
	y--;
	z--;
	return tmp;
}


_3dVector& _3dVector::operator *(int N)
{
	x *= N;
	y *= N;
	z *= N;
	return *this;
}
double _3dVector::Length()
{
	
	double length;
	length = sqrt(x * x + y * y + z * z);

	return length;

}
ostream& operator <<(ostream& out, const _3dVector& a)
{
	out << string(a) << endl;
	return out;
}
istream& operator >>(istream& in, _3dVector& a)
{
	cout << "ВВедить X= ";
	in >> a.x;
	cout << "ВВедить Y=";
	in >> a.y;
	cout << "ВВедить Z= ";
	in >> a.z;
	return in;
}
