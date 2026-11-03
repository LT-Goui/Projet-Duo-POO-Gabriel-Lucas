#include "Utilities.h"

inline void Vector2::set(int new_x, int new_y) {
    x = new_x;
    y = new_y;
}

Vector2 operator+(const Vector2& obj1, const Vector2& obj2) {
    Vector2 temp;
    temp.x = obj1.x + obj2.x;
    temp.y = obj1.y + obj2.y;
    return temp;
}

Vector2 operator-(const Vector2& obj1, const Vector2& obj2) {
    Vector2 temp;
    temp.x = obj1.x - obj2.x;
    temp.y = obj1.y - obj2.y;
    return temp;
}

Vector2 operator*(const Vector2& obj1, const Vector2& obj2) {
    Vector2 temp;
    temp.x = obj1.x * obj2.x;
    temp.y = obj1.y * obj2.y;
    return temp;
}

Vector2 operator/(const Vector2& obj1, const Vector2& obj2) {
    Vector2 temp;
    temp.x = obj1.x / obj2.x;
    temp.y = obj1.y / obj2.y;
    return temp;
}
