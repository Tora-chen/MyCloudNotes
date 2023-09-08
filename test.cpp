#include <iostream>
#include <iomanip>
using namespace std;

class Student {
public:
    Student(int, string, float);
    virtual void display();
protected:
    int num;
    string name;
    float score;
};
Student::Student(int n, string nam, float s) {
    num = n;
    name = nam;
    score = s;
}
void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "score: " << score << endl;
}
class Graduate : public Student {
public:
    Graduate(int, string, float, float);
    void display();
private:
    float wage; // 意思是工资
};
Graduate::Graduate(int n, string nam, float s, float w) : Student(n, nam, s), wage(w) {}
void Graduate::display() {
    Student::display();
    cout << "wage: " << wage << endl;
}
int main() {
    Student stud1(1001, "Li", 87.5);
    Graduate grad1(2001, "Wang", 98.5, 1200);
    Student* pt = &stud1;
    pt->display();
    pt = &grad1;
    pt->display();

    cout << endl;
    cout << setiosflags(ios::fixed) << setprecision(2) << 123.456 << endl;
    return 0;
}