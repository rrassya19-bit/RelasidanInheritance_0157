#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }
};

int main() {
    return 0;
}