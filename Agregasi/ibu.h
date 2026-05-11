#ifndef IBU_H
#define IBU_H
#include <iostream>
#include <vector>
#include <string>
#include "anak.h"
using namespace std;

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama) 
    {
        cout << "Ibu \"" << nama << "\" ada\n";
    }

    ~ibu() 
    {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    
    void tambahAnak(anak* pAnak);
};

void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}

#endif