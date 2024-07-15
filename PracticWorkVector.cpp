#include <iostream>

class Vector
{
public: 
    Vector(): x(), y(), z()
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        std::cout << "\n " << x << " " << y << " " << z << "\n";
    }

private:
    double x;
    double y;
    double z;
};
    
int main()
{
    Vector v(13,11,17);
    v.Show();
}
