class Employee{
    private:
        int count;
    public: 
        
        Employee(){
            cout<<"Constructor invoked"<<endl;
            count=0;
        }
        
        friend int add(Employee);
        
};

// friend function
int add(Employee b){
    b.count += 10;
    return b.count;
}

int main()
{
    Employee e1;
    cout<<add(e1);
    
    return 0;
}
