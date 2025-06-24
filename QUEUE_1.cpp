#include <iostream>
#define SIZE 5

using namespace std;

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
  if (rear >= SIZE - 1)
  {
    cout << "Queue Overflow!" << endl;
  }
  else
  {
    if (front == -1)
      front = 0;
    rear++;
    queue[rear] = value;
    cout << "Enqueued: " << value << endl;
  }
}

void dequeue()
{
  if (front == -1 || front > rear)
  {
    cout << "Queue Underflow!" << endl;
  }
  else
  {
    cout << "Dequeued: " << queue[front] << endl;
    front++;
  }
}

void peek()
{
  if (front == -1 || front > rear)
  {
    cout << "Queue is empty." << endl;
  }
  else
  {
    cout << "Front element: " << queue[front] << endl;
  }
}

void display()
{
  if (front == -1 || front > rear)
  {
    cout << "Queue is empty." << endl;
  }
  else
  {
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
    {
      cout << queue[i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int choice = 0, value;

  while (choice != 5)
  {
    cout << "\n--- Queue Menu ---" << endl;
    cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
      cout << "Enter value to enqueue: ";
      cin >> value;
      enqueue(value);
    }
    else if (choice == 2)
    {
      dequeue();
    }
    else if (choice == 3)
    {
      peek();
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
      cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
