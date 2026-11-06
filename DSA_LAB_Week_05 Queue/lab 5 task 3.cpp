//
//#include <iostream>
//using namespace std;
//
//class myCarStack
//{
//private:
//    int cars[8];
//    int count;
//
//public:
//    myCarStack()
//    {
//        count = 0;
//    }
//
//    bool isEmpty()
//    {
//        return count == 0;
//    }
//
//    bool isFull()
//    {
//        return count == 8;
//    }
//
//    void parkCar(int car)
//    {
//        if (isFull())
//            cout << "Parking is full\n";
//        else
//        {
//            cars[count++] = car;
//            cout << "Car parked\n";
//        }
//    }
//
//    int removeTop()
//    {
//        return cars[--count];
//    }
//
//    void addBack(int car)
//    {
//        cars[count++] = car;
//    }
//
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "No cars parked\n";
//            return;
//        }
//
//        cout << "Cars from top to bottom: ";
//
//        for (int i = count - 1; i >= 0; i--)
//            cout << cars[i] << " ";
//
//        cout << endl;
//    }
//
//    void removeCar(int car)
//    {
//        int temp[8], tempCount = 0;
//        bool found = false;
//
//        while (!isEmpty())
//        {
//            int current = removeTop();
//
//            if (current == car)
//            {
//                found = true;
//                break;
//            }
//
//            temp[tempCount++] = current;
//        }
//
//        while (tempCount > 0)
//            addBack(temp[--tempCount]);
//
//        if (found)
//            cout << "Car removed\n";
//        else
//            cout << "Car not found\n";
//    }
//
//    void searchCar(int car)
//    {
//        for (int i = 0; i < count; i++)
//        {
//            if (cars[i] == car)
//            {
//                cout << "Car is present\n";
//                return;
//            }
//        }
//
//        cout << "Car not found\n";
//    }
//
//    int totalCars()
//    {
//        return count;
//    }
//
//    int topCar()
//    {
//        if (isEmpty())
//            return -1;
//
//        return cars[count - 1];
//    }
//};
//
//int main()
//{
//    myCarStack parking;
//    int choice, car;
//
//    do
//    {
//        cout << "\n1. Park Car\n2. Remove Car\n3. Display Cars";
//        cout << "\n4. Total Cars\n5. Search Car\n6. Current Top Car";
//        cout << "\n7. Exit\nEnter choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter car number: ";
//            cin >> car;
//            parking.parkCar(car);
//            break;
//
//        case 2:
//            cout << "Enter car number to remove: ";
//            cin >> car;
//            parking.removeCar(car);
//            break;
//
//        case 3:
//            parking.display();
//            break;
//
//        case 4:
//            cout << "Total cars: " << parking.totalCars() << endl;
//            break;
//
//        case 5:
//            cout << "Enter car number: ";
//            cin >> car;
//            parking.searchCar(car);
//            break;
//
//        case 6:
//            if (parking.isEmpty())
//                cout << "Parking is empty\n";
//            else
//                cout << "Top car: " << parking.topCar() << endl;
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
