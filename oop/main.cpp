#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int std_id;
    int age;
    string father_name;
    string mother_name;
    void print_student()
    {
        cout<<name<<" "<<std_id<<" "<<father_name<<" "<<mother_name;
    }
};
int main()
{
    Student s1;
    s1.name="Bijon";
    s1.std_id=103;
    s1.father_name="kiran";
    s1.mother_name="ritu";
    s1.print_student();

}
class ractangle