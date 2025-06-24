#include <iostream>
#define N 5

using namespace std;

int queue[N];
int front = -1, rear = -1;

// Check if full
bool isFull()
{
  return (front == (rear + 1) % N);
}

// Check if empty
bool isEmpty()
{
  return (front == -1);
}

// Enqueue operation
void enqueue(int value)
{
  if (isFull())
  {
    cout << "Queue Overflow!" << endl;
    return;
  }
  if (isEmpty())
  {
    front = rear = 0;
  }
  else
  {
    rear = (rear + 1) % N;
  }
  queue[rear] = value;
  cout << "Enqueued: " << value << endl;
}

// Dequeue operation
void dequeue()
{
  if (isEmpty())
  {
    cout << "Queue Underflow!" << endl;
    return;
  }
  cout << "Dequeued: " << queue[front] << endl;
  if (front == rear)
  {
    // Last element removed → reset queue
    front = rear = -1;
  }
  else
  {
    front = (front + 1) % N;
  }
}

// Peek operation
void peek()
{
  if (isEmpty())
  {
    cout << "Queue is empty." << endl;
  }
  else
  {
    cout << "Front element: " << queue[front] << endl;
  }
}

// Display queue
void display()
{
  if (isEmpty())
  {
    cout << "Queue is empty." << endl;
    return;
  }
  cout << "Queue elements: ";
  int i = front;
  while (true)
  {
    cout << queue[i] << " ";
    if (i == rear)
      break;
    i = (i + 1) % N;
  }
  cout << endl;
}

int main()
{
  int choice = 0, value;

  while (choice != 6)
  {
    cout << "\n--- Circular Queue Menu ---\n";
    cout << "1. Enqueue\n"
         << "2. Dequeue\n"
         << "3. Peek\n"
         << "4. Display\n"
         << "5. Check if Empty/Full\n"
         << "6. Exit\n"
         << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter value to enqueue: ";
      cin >> value;
      enqueue(value);
      break;

    case 2:
      dequeue();
      break;

    case 3:
      peek();
      break;

    case 4:
      display();
      break;

    case 5:
      if (isEmpty())
        cout << "Queue is empty." << endl;
      else if (isFull())
        cout << "Queue is full." << endl;
      else
        cout << "Queue is neither empty nor full." << endl;
      break;

    case 6:
      cout << "Exiting program." << endl;
      break;

    default:
      cout << "Invalid choice. Please try again." << endl;
      break;
    }
  }

  return 0;
}
