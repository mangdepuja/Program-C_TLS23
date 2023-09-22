#include <iostream>
using namespace std;
int main() {
  
 
    int pilihan;
    cout << "Halo selamat datang dalam perhitungan kesehatan tubuh" << endl;
    cout << "Silakan pilih:" << endl;
    cout << "1. Mengetahui berat ideal" << endl;
    cout << "2. Mengetahui tinggi ideal" << endl;
    cout << "3. Mengetahui kadar gula darah normal" << endl;
    cin >> pilihan;
    
    switch (pilihan) {
        case 1: {
            double berat_badan;
            cout << "Masukan berat anda dalam kg" << endl;
            cin >> berat_badan;
            if (berat_badan > 100) {
                cout << "Berat badan kurang ideal, dianjurkan untuk diet sehat";
                }else {
                    cout << "Anda normal";
                }
                break;
            } 
         case 2: {
            double tinggi_badan;
            cout << "Masukan tinggi anda dalam cm" << endl;
            cin >> tinggi_badan;
            if (tinggi_badan < 100) {
                 cout << "Tinggi anda kurang ideal, dianjurkan untuk mengonsumsi kalsium";
                }else {
                    cout << "Tinggi anda ideal";
                }
                break;
            } 
          case 3: {
            double kadar_gula;
            cout << "Masukan kadar gula anda" << endl;
            cin >> kadar_gula;
            if (kadar_gula > 80) {
                cout << "Kadar gula puasa anda baik";
            }else {
                cout << "Kadar gula anda tidak baik";
               }
               break;
            }  
        }
    return 0;
    
}

