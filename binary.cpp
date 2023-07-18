#include <iostream>
#include <algorithm>
using namespace std;

const int N=100;
int npm[N];
int binarySearch(int x,int y,int z){
  if(z>=y){
    int mid=y+(z-y)/2;
    if(npm[mid]==x)
      return mid;
    if(npm[mid]>x)
      return binarySearch(x,y,mid-1);
      return binarySearch(x,mid+1,z);
  }
  return-1;
}
int main(){
  int n,i;
  cout << "Masukkan Jumlah Mahasiswa : ";
  cin  >> n;
  for(i=0;i<n;i++){
    cout << "Masukkan NPM Mahasiswa : ";
    cin>>npm[i];
  }
  sort(npm,npm+n);

  int x;
  cout << "\nMasukkan NPM yang dicari : ";
  cin  >> x;

  int hasil=binarySearch(x,0,n-1);
  if(hasil==-1)
    cout << "Maaf NPM yang anda cari tidak ditemukan.";
  else
    cout << "NPM ditemukan pada indeks ke - " << hasil << endl;
  return 0;
}