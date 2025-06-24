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

  int number_Pos;
  cout << "Enter position to delete (1-based index): ";
  cin >> number_Pos;

  if (number_Pos < 1 || number_Pos > n)
  {
    cout << "Invalid position!" << endl;
    return 0;
  }

  for (int i = number_Pos - 1; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }

  cout << "Array after deletion: ";
  for (int i = 0; i < n - 1; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
