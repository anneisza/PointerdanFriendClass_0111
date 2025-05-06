#include <iostream>
using namespace std;

class PersegiPanjang
{
public: // akses modifier
    int panjang, lebar;

public:
    void input ()
    {
        cout << "Masukkkan panjang : ";
        cin >> panjang;
        cout << "Masukkkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }
    //Lingkaran ol;
};

class Lingkaran{

};