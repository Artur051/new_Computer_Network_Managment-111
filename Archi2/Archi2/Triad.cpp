#include "Triad.h"
Triad operator+(const Triad& lhs, const double rhs)
{
	const double num1 = lhs.num1 + rhs;
	const double num2 = lhs.num2 + rhs;
	const double num3 = lhs.num3 + rhs;
	return Triad(num1,num2,num3);

}
Triad operator*(const Triad& lhs, const double rhs)
{
	const double num1 = lhs.num1 * rhs;
	const double num2 = lhs.num2 * rhs;
	const double num3 = lhs.num3 * rhs;
	return Triad(num1, num2, num3);
}
bool operator==(const Triad& lhs, const Triad& rhs)
{
	return (abs(lhs.num1 - rhs.num1) <= numeric_limits<double>::min())
		&& (abs(lhs.num2 - rhs.num2) <= numeric_limits<double>::min())
		&& (abs(lhs.num3 - rhs.num3) <= numeric_limits<double>::min());
}
ostream& operator<<(ostream& os, const Triad& obj)
{
	return os << obj.num1 << "," << obj.num2 << "," << obj.num3;
}
double Triad::get_num1() const { return num1; }
double Triad::get_num2() const { return num2; }
double Triad::get_num3() const { return num3; }