#include <iostream>
#define N 4

using namespace std;

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

int peek()
{
  if (top < 0)
  {
    cout << "Stack is empty" << endl;
    return -1;
  }
  else
  {
    return stack[top];
  }
}

bool isEmpty()
{
  return top == -1;
}

void display()
{
  if (top < 0)
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
      cout << stack[i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int choice = 0, value;

  while (choice != 5)
  {
    cout << "\n--- Stack Menu ---" << endl;
    cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
      cout << "Enter value to push: ";
      cin >> value;
      push(value);
    }
    else if (choice == 2)
    {
      pop();
    }
    else if (choice == 3)
    {
      int topValue = peek();
      if (topValue != -1)
      {
        cout << "Top element: " << topValue << endl;
      }
    }
    else if (choice == 4)
    {
      display();
    }
    else if (choice == 5)
    {
      cout << "Exiting program." << endl;
    }
    else
    {
      cout << "Invalid choice. Try again." << endl;
    }
  }

  return 0;
}
