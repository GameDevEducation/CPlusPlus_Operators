#include "Vector2.h"

const Vector2 Vector2::One(1, 1);
const Vector2 Vector2::Zero(0, 0);

Vector2::Vector2() :
	X(0), Y(0)
{
}

Vector2::Vector2(float inX, float inY) :
	X(inX), Y(inY)
{

}

Vector2 Vector2::operator+(const Vector2& inOther)
{
	return Vector2(X + inOther.X, Y + inOther.Y);
}

Vector2 Vector2::operator-(const Vector2& inOther)
{
	return Vector2(X - inOther.X, Y - inOther.Y);
}

Vector2& Vector2::operator+=(const Vector2& inOther)
{
	X += inOther.X;
	Y += inOther.Y;
	return *this;
}

Vector2& Vector2::operator-=(const Vector2& inOther)
{
	X -= inOther.X;
	Y -= inOther.Y;
	return *this;
}

Vector2 Vector2::operator*(float inMultiplier)
{
	return Vector2(X * inMultiplier, Y * inMultiplier);
}

Vector2 Vector2::operator/(float inDivisor)
{
	return Vector2(X / inDivisor, Y / inDivisor);
}

Vector2& Vector2::operator*=(float inMultiplier)
{
	X *= inMultiplier;
	Y *= inMultiplier;
	return *this;
}

Vector2& Vector2::operator/=(float inDivisor)
{
	X /= inDivisor;
	Y /= inDivisor;
	return *this;
}

bool Vector2::Equals(const Vector2& inOther, float tolerance /*= std::numeric_limits<float>::epsilon()*/) const
{
	return (std::fabs(inOther.X - X) <= tolerance) &&
		   (std::fabs(inOther.Y - Y) <= tolerance);
}

float Vector2::Dot(const Vector2& inOther) const
{
	return X * inOther.X + Y * inOther.Y;
}

float Vector2::Dot(const Vector2& lhs, const Vector2& rhs)
{
	return lhs.Dot(rhs);
}

std::ostream& operator<<(std::ostream& os, const Vector2& vec)
{
	os << "(" << vec.X << ", " << vec.Y << ")";
	return os;
}

bool operator==(const Vector2& lhs, const Vector2& rhs)
{
	return lhs.Equals(rhs);
}

bool operator!=(const Vector2& lhs, const Vector2& rhs)
{
	return !lhs.Equals(rhs);
}
