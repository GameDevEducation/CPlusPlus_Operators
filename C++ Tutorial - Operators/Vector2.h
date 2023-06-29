#pragma once
#include <iostream>

class Vector2
{
public:
	float X;
	float Y;

public:
	static const Vector2 One;
	static const Vector2 Zero;

public:
	Vector2();
	Vector2(float inX, float inY);

public:
	Vector2 operator + (const Vector2& inOther);
	Vector2 operator - (const Vector2& inOther);

	Vector2& operator += (const Vector2& inOther);
	Vector2& operator -= (const Vector2& inOther);

	Vector2 operator * (float inMultiplier);
	Vector2 operator / (float inDivisor);

	Vector2& operator *= (float inMultiplier);
	Vector2& operator /= (float inDivisor);

public:
	bool Equals(const Vector2& inOther, float tolerance = std::numeric_limits<float>::epsilon()) const;

public:
	float Dot(const Vector2& inOther) const;
	static float Dot(const Vector2& lhs, const Vector2& rhs);

	// only necessary if X and Y are private or protected
	friend std::ostream& operator << (std::ostream& os, const Vector2& vec);
	friend bool operator == (const Vector2& lhs, const Vector2& rhs);
	friend bool operator != (const Vector2& lhs, const Vector2& rhs);
};

std::ostream& operator << (std::ostream& os, const Vector2& vec);
bool operator == (const Vector2& lhs, const Vector2& rhs);
bool operator != (const Vector2& lhs, const Vector2& rhs);
