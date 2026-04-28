#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang {
    private:
        string nama;
    public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa {
    private:
        int id;
    public:
    void setID(int pld);
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a){
    cout << id << endl << a.nama;
}
