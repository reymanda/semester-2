#include <iostream>
using namespace std;

const int TOP = 100;

int main(){
  int x;
  int cost[TOP][TOP];
  int sumCost[TOP];
  int temp;
  int value;
  int y = 0;

  cout << "Masukkan jumlah kota : ";
  cin  >> x;

  cout << "-----Nilai cost matrix-----" << endl;

  for(int i = 0; i < x; i++){
    cout << "Cost element matriks ke - " << i+1 <<endl;
    for(int j = 0; j < x; j++){
      cin>> cost[i][j];
    }
  }

  cout << "Cost List : " << endl;

  for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++){
      cout << cost[i][j]<<" ";
    }
    cout << endl;
  }
  cout << "Jalur terpendek adalah : ";

  for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++){
      sumCost[i] = sumCost[i] + cost[i][j];
    }
  }
  cout << endl;

  for(int i = 0; i < x; i++){
    value = 0;
    for(int j = 0; j < x; j++){
      if(sumCost[i] > sumCost[j]){
        value++;
      }
    }
    if(value == y){
      if(y < x-1){
        cout << i+1 << " ---> ";
      }else{
        cout << i+1 << endl;
      }
      y = y + 1;
      i = -1;
    }
  }

  for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++){
      temp = sumCost[j];
      sumCost[j] = sumCost[j+1];
      sumCost[j+1] = temp;
    }
  }

  cout << "Minimum Cost : " << sumCost[0] << endl;
  return 0;
}