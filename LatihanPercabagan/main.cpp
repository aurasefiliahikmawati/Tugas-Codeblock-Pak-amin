#include <iostream>

using namespace std;

int main()
{
    int nilai;
    string grade;


    cout << "=======================" << endl;
    cout << "PERHITUNGAN GRADE NILAI" << endl;
    cout << "=======================" << endl;

    cout << "Masukkan Nilai: "; cin >> nilai;


    if ((nilai >= 0) &&(nilai<=60)) {
      cout << "Nilai Siswa E" << endl;
    }
      if ((nilai >= 61) &&(nilai<=70)) {
      cout << "Nilai Siswa D" << endl;
    }
      if ((nilai >= 71) &&(nilai<=80)) {
      cout << "Nilai Siswa C" << endl;
    }
      if ((nilai >= 81) &&(nilai<=90)) {
      cout << "Nilai Siswa B" << endl;
    }
      if ((nilai >= 91) &&(nilai<=100)) {
      cout << "Nilai Siswa A" << endl;
    }

        else {
            "input anda salah" ;
        }

    return 0;
}
