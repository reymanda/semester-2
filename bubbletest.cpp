#include <iostream>
using namespace std;

int main(){
  char kata[10] = "PERCOBAAN";
  int i,j;
  char temp;
    for (i=0 ; i<10 ; i++){
      for (j=0 ; j<10 ; j++){
        temp = kata[j];
        kata[j] = kata[j+1];
        kata[j+1] = temp;
      }
    }
  cout << "Kata PERCOBAAN setelah dilakukan penyortiran secara descending adalah :";
for (i=0 ; i<10 ; i++){
  cout << kata[i];
}
}