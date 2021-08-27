class MyClass{
    public:
        int x;
        static int count;
        
        MyClass(){
            count++;
        }
        
        static int getCount(){
            return count;
        }
};

// initialising static data member
int MyClass :: count;

int main()
{
    // we can access data member of class without even creating an object
    cout<<"Initial count is: "<<MyClass::count<<endl;
    
    MyClass obj1, obj2; // default constructor ran 2 times
    
    cout<<"Count after 2 objects is: "<<MyClass::getCount()<<endl;

    return 0;
}
