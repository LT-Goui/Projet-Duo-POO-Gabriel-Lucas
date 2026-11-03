#pragma once

class Vector2 {

    public:
        int x = 0;
        int y = 0;

        void set(int new_x, int new_y);

        friend Vector2 operator + (const Vector2& obj1, const Vector2& obj2);

        friend Vector2 operator - (const Vector2& obj1, const Vector2& obj2);

        friend Vector2 operator * (const Vector2& obj1, const Vector2& obj2);

        friend Vector2 operator / (const Vector2& obj1, const Vector2& obj2);

    //private : 

};