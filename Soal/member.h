#ifndef MEMBER_H
#define MEMBER_H

#include "user.h"

class Member : public User {
private:
    bool status;

public:
    Member(string pNama, string pEmail) : User(pNama, pEmail), status(true) {
        cout << "    --> Terdaftar sebagai Member\n";
    }

    ~Member() {
        cout << "[-] Member: \"" << getNama() << "\" dihapus\n";
    }

    void showProfile() {
        cout << "--------------------------+\n";
        cout << "|      PROFIL MEMBER      |\n";
        cout << "|-------------------------+\n";
        cout << "| ID     : " << getId()    << "              |\n";
        cout << "| Nama   : " << getNama()  << "           |\n";
        cout << "| Email  : " << getEmail() << "  |\n";
        cout << "| Status : " << (status ? "Aktif  (*)" : "Nonaktif  ") << "     |\n";
        cout << "---------------------------\n";
    }

    void setStatus(bool s) { status = s; }
    bool getStatus()       { return status; }
};

#endif