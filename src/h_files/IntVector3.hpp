# pragma once

struct IntVector3
{
    int X, Y, Z;
    
    IntVector3(const int x,const int y,const int z)
    {
        this->X = x;
        this->Y = y;
        this->Z = z;
    }

    inline static const IntVector3 Right()
    {
        return IntVector3(1, 0, 0);
    }

    inline static const IntVector3 Left()
    {
        return IntVector3(-1, 0, 0);
    }

    inline static const IntVector3 Up()
    {
        return IntVector3(0, 1, 0);
    }





};