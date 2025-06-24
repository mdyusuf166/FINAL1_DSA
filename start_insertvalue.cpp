#include<iostream>
using namespace std;
int main (){
    int n;
    cout<< "Enter value :";
    cin>> n;
    int arr[n+1];
    for(int i = 0 ;i<n;i++){
        cin >>arr[i];
    }
    int number_Insert;
    cin >> number_Insert;
    for(int i = n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = number_Insert;
    
    for(int i = 0 ; i< n + 1 ; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}