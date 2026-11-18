#include <iostream>
using namespace std;
int main(){
int arr[] = {8,5,4,6,2,1};
int size = 6;
for(int i=0; i<size-1; i++){
  int index = i;
  for(int j=i+1; j<size; j++){
    if(arr[j]<arr[index]){
      index = j;
    }
    swap(arr[i], arr[index]);
  }
}
  return 0;
}
