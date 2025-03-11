#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int age;
    float marks;

    // Student(string n, int a, int m){
    //     name = n;
    //     age = a;
    //     marks = m;
    // }

    // Agar argument ka name same rakhna to THIS -> use krna hoga warna error aygi
    Student(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }
};

void change(Student &s)
{
    s.name = "Mishra_Ji";
}

void changepointerse(Student* s){
    s->name = "Kya_pata_Pointer_se_kia";
}

int main()
{
    Student* s1 = new Student("Suyash", 22, 98);
    cout << s1->name<<endl;
    changepointerse(s1);
    cout << s1->name<<endl;


    Student s("Suyash ", 21, 98);
    // s.name = "Suyash Mishra";
    // s.age = 21;
    // s.marks = 98.0;
    cout << s.name << endl;
    cout << s.age << endl;

    // if want to change name or other details in the variable we can use 2 method

    s.name = "Gunnu";
    cout << s.name << endl;

    // OR
    change(s);
    cout << s.name << endl;
    //  change ni hui kyuki value pass hui as a value to change ni hui
    // Passs krna hoga by reference function me & laga kr value lena hoga tb change hoga

    // CHANGE BY POINTER
    Student *ptr = &s;
    (*ptr).name = "Vaishali";
    cout << s.name << endl;

    //  Or
    ptr->name = "Ajay";
    cout << s.name << endl;
    cout << ptr << endl;
    cout << &s << endl; // Pointer location

    cout << endl;
    return 0;
}