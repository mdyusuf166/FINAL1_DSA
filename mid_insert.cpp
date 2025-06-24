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
    int number_Pos,insert_Value;
    cin >> number_Pos >>insert_Value;

    for(int i = n-1; i >= number_Pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[number_Pos -1] = insert_Value  ;





    
    for(int i = 0 ; i< n + 1 ; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}