#include <iostream>
#include <string>
using namespace std;

class Book{
  private:
    string Nama;
    string JudulBuku1;
    string JudulBuku2;

  public:
    void setNama(string n){
      Nama = n;
    }
    void setJudulBuku1(string JB1){
      JudulBuku1 = JB1;
    }
    void setJudulBuku2(string JB2){
      JudulBuku2 = JB2;
    }
    string getNama(){
      return Nama;
    }
    string getJudulBuku1(){
      return JudulBuku1;
    }
    string getJudulBuku2(){
      return JudulBuku2;
    }
};
int main (){
  Book Perpustakaan;
  Perpustakaan.setNama("Nicholas");
  Perpustakaan.setJudulBuku1("30 Menit Jago Koding C++");
  Perpustakaan.setJudulBuku2("Belajar Koding Sambil Ngopi");
  cout << "Buku " << Perpustakaan.getJudulBuku1();
  cout << " Telah dipinjam " << Perpustakaan.getNama() << "." << endl;
  cout << "Buku " << Perpustakaan.getJudulBuku2();
  cout << " Telah dikembalikan " << Perpustakaan.getNama() << "." << endl;
  return 0;
}