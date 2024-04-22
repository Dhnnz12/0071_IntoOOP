#include <iostream>
using namespace std;

class bangunDatar{


    private:
        float panjang, lebar;
    public:
        float Luas;

        void input() {

           cout << "Masukan Panjangnya = ";
           cin >> panjang; 
           cout << "Masukan Lebarnya = ";
           cin >> lebar;
        }

        float hitungluas (){
            return panjang * lebar;
        }

        void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = "  << lebar << endl;
            cout << "Luassnya = "  << hitungluas() << endl;
        }
}