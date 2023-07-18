#include <iostream>
using namespace std;

void swap(int arr[],int pos1,int pos2){
  int temp;
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = temp;
}
int partition(int arr[],int low,int high,int pivot){
  int a = low;
  int b = low;
  while(a <= high){
    if(arr[a] > pivot){
      a++;
      }else{
      swap(arr,a,b);
      a++;
      b++;
      }
    }
    return b-1;
  }
void quickSort(int arr[],int low,int high){
  if(low < high){
  int pivot = arr[high];
  int pos = partition(arr,low,high,pivot);

  quickSort(arr,low,pos-1);
  quickSort(arr,pos+1,high);
   }
  }
int main (){
  int n;
  cout << "Tentukkan panjang array :";
  cin  >> n;
  int arr[n];
  for(int a = 0;a < n;a++){
    cin >> arr[a];
  }
  quickSort(arr,0,n-1);
  cout << "Berikut adalah array yang telah disortir :";
  for(int a = 0;a < n;a++){
    cout << arr[a] << " ";
  }
}