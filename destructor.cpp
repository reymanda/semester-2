#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
  public:
    Mahasiswa(string nama, int umur)
      : nama(nama), umur_(umur){
        cout << "Constructor Mahasiswa" << endl;
      }
~Mahasiswa(){
  cout << "==Contoh Descrtuctor Mahasiswa==" << endl;
  }
void TampilkanBiodata(){
  cout << "Nama : " << nama << endl;
  cout << "Umur : " << umur_ << endl;
}
  private:
    string nama;
    int umur_;
};
int main(){
  {Mahasiswa mhs("Katarina",20);
  mhs.TampilkanBiodata();
}
return 0;
}