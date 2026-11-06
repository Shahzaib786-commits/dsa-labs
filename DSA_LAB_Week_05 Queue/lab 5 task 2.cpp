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
//    T* minArr;
//    int size, count, minCount;
//
//public:
//    myStack(int s)
//    {
//        size = s;
//        count = 0;
//        minCount = 0;
//        arr = new T[size];
//        minArr = new T[size];
//    }
//
//    void push(T value)
//    {
//        if (isFull())
//        {
//            cout << "Stack is full\n";
//            return;
//        }
//
//        arr[count++] = value;
//
//        if (minCount == 0 || value <= minArr[minCount - 1])
//            minArr[minCount++] = value;
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
//        T value = arr[--count];
//
//        if (value == minArr[minCount - 1])
//            minCount--;
//
//        return value;
//    }
//
//    T top() const
//    {
//        if (isEmpty())
//            return T();
//
//        return arr[count - 1];
//    }
//
//    T getMin() const
//    {
//        if (isEmpty())
//            return T();
//
//        return minArr[minCount - 1];
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
//        for (int i = count - 1; i >= 0; i--)
//            cout << arr[i] << " ";
//
//        cout << endl;
//    }
//
//    ~myStack()
//    {
//        delete[] arr;
//        delete[] minArr;
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
//        cout << "\n5. Check Full\n6. Display\n7. Show Minimum\n8. Exit\n";
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
//            if (!s.isEmpty())
//                cout << "Minimum: " << s.getMin() << endl;
//            else
//                cout << "Stack is empty\n";
//            break;
//
//        case 8:
//            cout << "Program ended\n";
//            break;
//
//        default:
//            cout << "Invalid choice\n";
//        }
//    } while (choice != 8);
//
//    return 0;
//}
