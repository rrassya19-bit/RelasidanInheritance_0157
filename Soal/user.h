#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {
private:
    static int globalId;
    int    id;
    string nama;
    string email;

public:
    User(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
        cout << "[+] User  : \"" << nama << "\" | ID: " << id << "\n";
    }

    ~User() {
        cout << "[-] User  : \"" << nama << "\" dihapus\n";
    }

    int    generateId() { return ++globalId; }
    int    getId()      { return id; }
    string getNama()    { return nama; }
    string getEmail()   { return email; }
};

int User::globalId = 0;

#endif