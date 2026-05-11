#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "member.h"

class Admin : public User {
public:
    Admin(string pNama, string pEmail) : User(pNama, pEmail) {
        cout << "    --> Terdaftar sebagai Admin\n";
    }

    ~Admin() {
        cout << "[-] Admin : \"" << getNama() << "\" dihapus\n";
    }

    void showAllMember(vector<Member*>& daftarMember) {
        cout << "\n========================================\n";
        cout << "  DAFTAR SEMUA MEMBER";
        cout << " (" << daftarMember.size() << " terdaftar)\n";
        cout << "========================================\n";
        if (daftarMember.empty()) {
            cout << "  (Belum ada member terdaftar)\n";
            cout << "========================================\n";
            return;
        }
        for (size_t i = 0; i < daftarMember.size(); i++) {
            cout << "  [" << (i + 1) << "] ";
            cout << "ID:" << daftarMember[i]->getId()
                 << "  " << daftarMember[i]->getNama()
                 << "  <" << daftarMember[i]->getEmail() << ">"
                 << "  [" << (daftarMember[i]->getStatus() ? "Aktif" : "Nonaktif") << "]\n";
        }
        cout << "========================================\n";
    }

    void toggleActivationMember(Member* m) {
        bool statusBaru = !m->getStatus();
        m->setStatus(statusBaru);
        cout << "\n[*] Toggle Status\n";
        cout << "    Member  : " << m->getNama() << "\n";
        cout << "    Status  : " << (!statusBaru ? "Aktif" : "Nonaktif")
             << " --> " << (statusBaru ? "Aktif" : "Nonaktif") << "\n";
    }
};

#endif