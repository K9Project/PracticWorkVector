#include <iostream>
#include <cmath>

class Vector
{
public:
    Vector() : x(), y(), z()
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    double lenght() const
    {
        return sqrt(x * x + y * y + z * z);
    }
    double GetModule()
    {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }


    /*int XX = x * x;
    int YY = y * y;
    int ZZ = z * z;
    int Sum = XX + YY + ZZ;
    int s = sqrt(Sum);*/

    void Show()
    {
        std::cout << "\n " << x << " " << y << " " << z << "\n";
        std::cout << " modulus (Lenght) = " << lenght() << "\n";
        std::cout << " modulus (GetModule) = " << GetModule() << "\n";
        /*std::cout << "\n " << XX << " " << YY << " " << ZZ << "\n";
        std::cout << " Sum XX+YY+ZZ = " << Sum << "\n " << s;*/
    }

private:
    double x;
    double y;
    double z;
    /*double s;*/
};

int main()
{
    Vector v(1, 1, 1);
    v.Show();
}
