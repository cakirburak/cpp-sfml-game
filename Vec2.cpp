#include "Vec2.hpp"
#include <cmath>
#include <iostream>

Vec2::Vec2(){}

Vec2::Vec2(float xin, float yin):x(xin),y(yin){}

bool Vec2::operator == (const Vec2& rhs) const
{
  return (x == rhs.x && y== rhs.y);
}

bool Vec2::operator != (const Vec2& rhs) const
{
  return !(x == rhs.x && y== rhs.y);
}

Vec2 Vec2::operator + (const Vec2& rhs) const
{
  return Vec2(x+rhs.x, y+rhs.y);
}

Vec2 Vec2::operator - (const Vec2& rhs) const
{
  return Vec2(x-rhs.x, y-rhs.y);
}

Vec2 Vec2::operator * (const float val) const
{
  return Vec2(x*val, y*val);
}

Vec2 Vec2::operator / (const float val) const
{
  return Vec2(x/val, y/val);
}

void Vec2::operator += (const Vec2& rhs)
{
  x += rhs.x; y += rhs.y;
}

void Vec2::operator -= (const Vec2& rhs)
{
  x -= rhs.x; y -= rhs.y;
}

void Vec2::operator *= (const float val)
{
  x *= val; y *= val;
}

void Vec2::operator /= (const float val)
{
  x /= val; y /= val;
}

float Vec2::dist(const Vec2& vec) const
{
  return sqrt( (vec.x - x) * (vec.x - x) + (vec.y - y) * (vec.y - y) );
}

float Vec2::length() const
{
  return sqrt(x*x + y*y);
}

void Vec2::print() const
{
  std::cout << "X: " << x << " / Y: " << y << std::endl;
}











