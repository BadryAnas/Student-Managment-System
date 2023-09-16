#include <bits/stdc++.h>
using namespace std;

class Student
{
private:

    string name;
    int id, age;

public:

    Student(string n , int idd , int ag)
    {
        name = n;
        id = idd;
        age = ag;
    }

    void set_name(string n)
    {
        name = n;
    }

    string get_name()
    {
        return name;
    }

    void set_id(int idd)
    {
        id = idd;
    }

    int get_age()
    {
        return age;
    }


    void set_age(int ag)
    {
        age = ag;
    }

    int get_id()
    {
        return id;
    }
};



