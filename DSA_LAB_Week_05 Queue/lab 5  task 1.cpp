//
//#include <iostream>
//using namespace std;
//
//template <class T>
//class AbstractStack
//{
//public:
//    virtual void push(T value) = 0;
//    virtual T pop() = 0;
//    virtual T top() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractStack() {}
//};
//
//template <class T>
//class myStack : public AbstractStack<T>
//{
//private:
//    T* arr;
//    int size;
//    int count;
//
//public:
//    myStack(int s)
//    {
//        size = s;
//        count = 0;
//        arr = new T[size];
//    }
//
//    void push(T value)
//    {
//        if (isFull())
//            cout << "Stack is full\n";
//        else
//            arr[count++] = value;
//    }
//
//    T pop()
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty\n";
//            return T();
//        }
//
//        return arr[--count];
//    }
//
//    T top() const
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty\n";
//            return T();
//        }
//
//        return arr[count - 1];
//    }
//
//    bool isEmpty() const
//    {
//        return count == 0;
//    }
//
//    bool isFull() const
//    {
//        return count == size;
//    }
//
//    void display() const
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty\n";
//            return;
//        }
//
//        for (int i = count - 1; i >= 0; i--)
//            cout << arr[i] << " ";
//
//        cout << endl;
//    }
//
//    ~myStack()
//    {
//        delete[] arr;
//    }
//};
//
//int main()
//{
//    myStack<int> s(5);
//    int choice, value;
//
//    do
//    {
//        cout << "\n1. Push\n2. Pop\n3. Top\n4. Check Empty";
//        cout << "\n5. Check Full\n6. Display\n7. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            s.push(value);
//            break;
//
//        case 2:
//            if (!s.isEmpty())
//                cout << "Removed: " << s.pop() << endl;
//            else
//                cout << "Stack is empty\n";
//            break;
//
//        case 3:
//            if (!s.isEmpty())
//                cout << "Top: " << s.top() << endl;
//            else
//                cout << "Stack is empty\n";
//            break;
//
//        case 4:
//            cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
//            break;
//
//        case 5:
//            cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;
//            break;
//
//        case 6:
//            s.display();
//            break;
//
//        case 7:
//            cout << "Program ended\n";
//            break;
//
//        default:
//            cout << "Invalid choice\n";
//        }
//    } while (choice != 7);
//
//    return 0;
//}
