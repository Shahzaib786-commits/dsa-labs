////#include <iostream>
//using namespace std;
//
//class Course {
//public:
//    virtual void duration() = 0;
//};
//
//class OnlineCourse : public Course {
//private:
//    int weeks;
//    int hoursPerWeek;
//
//public:
//    OnlineCourse(int w, int h) {
//        weeks = w;
//        hoursPerWeek = h;
//    }
//    void duration() override {
//        cout << "Online Course Duration: " << endl;
//        cout << weeks << " weeks, " << endl;
//        cout << weeks * hoursPerWeek << endl;
//        cout << " total study hours." << endl;
//    }
//};
//
//  class OfflineCourse : public Course {
//private:
//    int months;
//    int hoursPerDay;
//
//public:
//    OfflineCourse(int m, int h) {
//        months = m;
//        hoursPerDay = h;
//    }
//    void duration() override {
//        cout << "Offline Course Duration: " << endl;
//            cout << months << " months, " << endl;
//            cout << months * 30 * hoursPerDay << endl;
//         cout << " total study hours (assuming 30 days per month)." << endl;
//    }
//  };
//  int main() {
//      OnlineCourse online(8, 5);
//      OfflineCourse offline(3, 4);
//
//      cout << "   Course Details " << endl;
//
//      online.duration();
//      offline.duration();
//
//      return 0;
//  }
