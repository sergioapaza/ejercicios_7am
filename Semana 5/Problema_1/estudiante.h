#include <iostream>
using namespace std;


class Student {
    public:
    explicit Student(string n, int a):name{n}{
        if(a>0){
            age=a;
        }
    }


    void setName(string n){
        name=n;
    }


    string getName() const{
        return name;
    }


    void setAge(int a){
        age=a;
    }
    int getAge() const{
        return age;
    }
    bool isOlder(int a) const{
        return (a<=18);
    }


   
    private:
        string name;
        int age{0};
};