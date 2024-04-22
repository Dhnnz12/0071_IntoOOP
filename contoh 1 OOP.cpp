#include <iostream>
using namespace std;

class Mahasiswa{
    public: //AKSES Modifier
             string nama;
             int umur;
            string jurusan;

            void output(){
                cout << "Nama: "<< nama << endl;
                cout << "Umur: "<< umur << endl;
                cout << "Jurusan: " << jurusan << endl;
            }

};


class MataKuliah{
    private:
    string kodemk;
    string namamk;
    int sks;
    public:
        void input(){
           cout << "Kode MK: ";
           cin >> kodemk;
           cout << "Nama MK: ";
           cin >> namamk;
           cout << "SKS: ";
           cin >> sks;
        }

        void output(){
            cout << "Kode MK: " << kodemk << endl;
            cout << "Nama MK: " << namamk << endl;
            cout << "SKS: " << sks << endl;
        }
};

int main() {
    Mahasiswa mhs;
    MataKuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    


}