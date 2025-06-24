#include <iostream>
using namespace std;
#define N 5

int stack[N];
int top = -1;

void push(int value)
{
  if (top >= N - 1)
  {
    cout << "Stack Overflow" << endl;
  }
  else
  {
    top++;
    stack[top] = value;
    cout << "Pushed: " << value << endl;
  }
}

void pop()
{
  if (top < 0)
  {
    cout << "Stack Underflow" << endl;
  }
  else
  {
    cout << "Popped: " << stack[top] << endl;
    top--;
  }
}

void peek()
{
  if (top == -1)
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Top element is: " << stack[top] << endl;
  }
}

void display()
{
  if (top == -1)
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack from top to bottom: ";
    for (int i = top; i >= 0; i--)
    {
      cout << stack[i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int choice = 0, value; // ✅ initialized choice

  while (choice != 5)
  {
    cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter value to push: ";
      cin >> value;
      push(value);
      break;
    case 2:
      pop();
      break;
    case 3:
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      cout << "Exiting..." << endl;
      break;
    default:
      cout << "Invalid choice. Please try again." << endl;
      break;
    }
  }

  return 0;
}
