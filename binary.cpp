#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 3;
  int high = n - 1;
  int low = 0;
  int index = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
    {
      index = mid;
      break;
    }
    else if (arr[mid] < key)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  if (index != -1)
  {
    cout << "Element found at index: " << index << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
}