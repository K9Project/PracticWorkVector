#include <windows.h>
#include <iostream>
#include <vector>

class Vector
{
public: 
    Vector(): x(), y(), z()
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        std::cout << "\n" << x << " " << y << " " << z << "\n";
    }
private:
    double x = 0;
    double y = 0;
    double z = 0;
};
    
int main()
{
    Vector v;
    v.Show();
}
