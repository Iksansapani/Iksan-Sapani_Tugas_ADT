#include <iostream>
#include <windows.h>
using namespace std;
/*
Nama  = Iksan Sapani
Nim   = 1121031004
Kelas = B
Nama File = jam.h
*/
/*deskripsi : deklarasi prototype set jam
*/
int main()
{
    int HH, MM, SS, a, b;
    b = a = 0;
    while (b == 0)
    {
        cout << "set jam : " << endl; //masukan nilai jam
        cin >> HH;
        cout << "set menit : " << endl; //masukan nilai menit
        cin >> MM;
        cout << "set detik : " << endl; //masukan nilai detik
        cin >> SS;
        if (HH < 23 && MM < 59 && SS < 59) //fungsi isvalid
            b++;
        else
            system("cls");
    }
    while (a == 0)
    {
        system("cls");
        cout << HH << ":" << MM << ":" << SS << endl;
        Sleep(1000);
        SS++;
        if (SS > 59)
        {
            SS = 0;
            MM++;
        }
        if (MM > 59)
        {
            MM = 0;
            HH++;
        }
        if (HH > 23)
        {
            HH = 0;
        }
    }
    cin.get();
    return 0;
}




