#include <bits/stdc++.h>
using namespace std;
#define e endl

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

void add_New_Stduent(vector<Student>&v)
{
    string name;
    int age, id;
    cout<<"Enter name of student : "<<e;
    cin>>name;
    cout<<"Enter id of student : "<<e;
    cin>>id;

    for(long long i = 0 ; i  < v.size() ; i++)
    {
        if(v[i].get_id() == id)
        {
            cout<<"This Student already exist\n "<<e;
            return ;
        }
    }

    cout<<"Enter age of student : "<<e;
    cin>>age;
    cout<<"Done\n"<<e;


    Student st(name,id,age);

    v.push_back(st);

}

void Display_All_students(vector<Student>&v)
{
    for(long long i = 0 ; i < v.size() ; i++)
    {
        cout<<"Name = "<<v[i].get_name()<<"\nID ="<<v[i].get_id()<<"\nAge ="<<v[i].get_age()<<e<<e;
    }
}

bool search_student(vector<Student>&v )
{
    int id;
    cout<<"Enter the id please\n";
    cin>>id;

    for(long long i = 0 ; i < v.size() ; i++)
    {
        if(v[i].get_id() == id)
        {
            return true;
        }
    }
    return false;
}

void Update_student(vector<Student>&v)
{
    int id_search;
    cout<<"Enter id of student that You want to search "<<e;
    cin>>id_search;

    string name;
    int age, id;
    cout<<"Enter name of student : "<<e;
    cin>>name;
    cout<<"Enter id of student : "<<e;
    cin>>id;

    for(long long i = 0 ; i  < v.size() ; i++)
    {
        if(v[i].get_id() == id)
        {
            cout<<"This Student already exist\n "<<e;
            return ;
        }
    }

    cout<<"Enter age of student : "<<e;
    cin>>age;
    cout<<"Done\n"<<e;


    for(long long i = 0 ; i  < v.size() ; i++)
    {
        if(v[i].get_id() == id_search)
        {
            v[i].set_id(id);
            v[i].set_name(name);
            v[i].set_age(age);
        }
    }

}

void Delete_student(vector<Student>&v)
{
    int id;
    cout<<"Enter id of student : "<<e;
    cin>>id;

    for(long long i = 0 ; i  < v.size() ; i++)
    {
        if(v[i].get_id() == id)
        {
            v.erase(v.begin()+i);
            cout<<"Student deleted Successfully..."<<e;
            return ;
        }
    }
}


int main()
{
    bool valid = true;
    int numberOfProcess;
    vector<Student>v;


    while(valid)
    {


        cout<<"Enter Number:"<<e;
        cout<<"1. Add new student "<<endl;
        cout<<"2. Display All students "<<endl;
        cout<<"3. search student "<<endl;
        cout<<"4. Update student "<<endl;
        cout<<"5. Delete student "<<endl;
        cout<<"6. Exit :"<<endl;

        cin>>numberOfProcess;

        try{
            switch(numberOfProcess)
            {
                case 1:
                    add_New_Stduent(v);
                    break;
                case 2:
                    Display_All_students(v);
                    cout<<e;
                    break;
                case 3:
                    if(search_student(v))
                        cout<<"Exist\n";
                    else
                        cout<<"Not Exist\n";
                    break;
                case 4:
                    Update_student(v);
                    break;
                case 5:
                    Delete_student(v);
                    break;
                case 6:
                    valid = false;
                    break;
                default:
                    throw "incorrect input\n";
                    break;
            }
            }
            catch(const char* s)
            {
                cout<<s;
                return 0;
            }

    }


    return 0;
}
