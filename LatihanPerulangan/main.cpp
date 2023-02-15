#include <iostream>

using namespace std;

int main()
{
    int j=0;
    char tambah = 'y';
    cout << "===== While ====="<<endl;
    while(tambah == 'y'){
        cout << "Perulangan ke " << j;
        cout << "Apakah ingin nambah? (y/n) ";
        cin >> tambah;
        j++;
    }

    return 0;
}
