// Base class 1
class A{
    public:
        void printMessage(){
            cout<<"Class A printMessage() called"<<endl;
        }
};

// Base class 2
class B{
    public:
        void printMessage(){
            cout<<"Class B printMessage() called"<<endl;
        }
};

// Derived class uing Multiple inheritance
class AB : public A, public B {
    
    public:
        void printMessage1(){
            // AMBIGUITY ERROR - when both base classes have function with same name, compiler doesn't understand which func is to be called
            // this will call class A's printMessage() & will avoid the AMBIGUITY ERROR 
            A::printMessage();
            // overriding the printMessage func
            cout<<"Class AB printMessage() called"<<endl;
        }
};

int main()
{
    AB obj;
    obj.printMessage();

    return 0;
}

================ OR ==================================

class Animal{
    public:
        void eat(){
            cout<<"Eating..."<<endl;
        }
        
};

class Human {
    public:
        void walk(){
            cout<<"Walking..."<<endl;
        }
};

class Baby : public Animal, public Human{
    public:
        void cry(){
            cout<<"Crying...";
        }
};

int main()
{
    Baby b;
    b.eat();
    b.walk();
    b.cry();
    
    return 0;
}
