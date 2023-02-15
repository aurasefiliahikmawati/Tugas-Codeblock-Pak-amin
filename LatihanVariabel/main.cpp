#include <iostream>

using namespace std;

int main()
{
   string nama;
   int umur;
   char jk;
   cout << "Siapa namamu?" << endl;
   cout << "Jawab: ";
   //cin >> nama;
   getline(cin, nama);

   cout << "berapa umurmu?" << endl;
   cout << "Jawab: ";
   cin >> umur;

   cout << "kamu laki-laki atau perempuan (L/P)" << endl;
   cout << "Jawab: ";
   cin >> jk;

   cout << "salam kenal!" << nama << "Anda berusia" << umur;
   cout << "dan Anda berjenis kelamin " <<jk;

    return 0;
}
