#include <iostream>
using namespace std;

bool sorted(int arr[], int n , int i){
    if(i == n-1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    return sorted(arr, n ,  i+1);
}

int main(){
   int arr[5] = {2,4,6,88,10};
   cout << sorted(arr,5,0);
}
    

