class Base{
    public:
        void show(){
            cout<<"Base class show() called"<<endl;
        }
        
        virtual void print(){
            cout<<"Base class print() called"<<endl;
        }
};

class Derived : public Base{
    void show(){
            cout<<"Derived class show() called"<<endl;
        }
        
    void print(){
            cout<<"Derived class print() called"<<endl;
        }
};

int main()
{
    Base *baseptr;
    Derived derivedObj;
    
    baseptr = &derivedObj;
    
    // in o/p derivedObj's print() func will be called as it is declared as a virtual func in Base class
    baseptr -> print();   // run time polymorphism
    baseptr -> show();    // here base class's show() func is called

    return 0;
}
