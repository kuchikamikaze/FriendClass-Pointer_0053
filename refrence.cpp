#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk =" << nim << endl;
    }
};

int main (){
    mahasiswa mhs{1};
    mhs.showNim();

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.showNim();
    
}