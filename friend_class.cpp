class A{
    int x = 5;
    public:
        friend class B;
};

// friend class - can access private and public members of the class in which it is declared as friend
class B{
    public:
        void display(A &a){
            cout<<"value of x is: "<<a.x;
        }
};


int main()
{
    A a1;
    B b1;
    b1.display(a1);
    
    return 0;
}
