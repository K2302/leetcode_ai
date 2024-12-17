class Person
{
public:
    string name;
    int age;
    Person()
    {
        cout<<"Base"<<endl;
    }
};
class Student : public Person
{
public:
    int rollno;
    void getinfo()
    {
        cout << " name : " << name << endl;
        cout << " age : " << age << endl;
        cout << " rollno : " << rollno << endl;
    }
    Student()
    {
        cout<<"Child"<<endl;
    }
};

signed main()
{

    Student s1;
    s1.name = "rahul";
    s1.age = 23;
    s1.rollno = 34;
  //  s1.getinfo();
    return 0;
}