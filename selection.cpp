#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    int minIdex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIdex])
      {
        minIdex = j;
      }
    }
    // swap(arr[i], arr[minIdex]);

    if(minIdex != i)
    {
      int temp = arr[i];
      arr[i] = arr[minIdex];
      arr[minIdex] = temp;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}