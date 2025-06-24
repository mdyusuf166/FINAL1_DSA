#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " elements:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  n--; 

    cout << "Array after deleting first element:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
