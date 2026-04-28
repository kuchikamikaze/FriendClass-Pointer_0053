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

void orang::setNama(string pNama){
    nama = pNama;
}
void siswa::setID(int pld){
    id = pld;
}

int main(){
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setID(1);
    joko_siswa.displayAll(joko);
    return 0;
}