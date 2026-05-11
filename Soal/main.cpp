#include <iostream>
#include <vector>
using namespace std;

#include "user.h"
#include "member.h"
#include "admin.h"

int main() {
    cout << "========================================\n";
    cout << "       SISTEM MANAJEMEN USER\n";
    cout << "========================================\n\n";

    cout << "--- >Registrasi Akun< ---\n";
    Admin*  adminUtama = new Admin("Budi",  "budi@mail.com");
    Member* m1         = new Member("Andi", "andi@mail.com");
    Member* m2         = new Member("Rina", "rina@mail.com");
    Member* m3         = new Member("Tono", "tono@mail.com");

    vector<Member*> semuaMember = { m1, m2, m3 };

    // Tampilkan daftar awal
    adminUtama->showAllMember(semuaMember);

    // Toggle status Rina
    adminUtama->toggleActivationMember(m2);

    // Tampilkan setelah perubahan
    adminUtama->showAllMember(semuaMember);

    // Showprofile salah satu member
    cout << "\n--- >showProfile() untuk Andi< ---\n";
    m1->showProfile();

    // Cleanup
    cout << "\n--- >Menghapus Semua Objek< ---\n";
    delete adminUtama;
    delete m1;
    delete m2;
    delete m3;

    cout << "\nProgram selesai, Terima kasih!\n";
    return 0;
}