#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNIM(){
        cout << "No Induk = "<<nim<<endl;
    }

};

int main(){
    mahasiswa mhs{1}; //Object mhs
    mhs.showNIM(); //Member Access Operator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.showNIM();

    mahasiswa *pMhs = &mhs; //pointer Dereference pMhs
    pMhs->nim = 3;
    pMhs->showNIM();
    return 0;
}