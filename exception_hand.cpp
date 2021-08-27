int main()
{
    int numerator, denominator, result;
    cout<<"Enter numerator & denominator: "<<endl;
    cin>>numerator>>denominator;
    
    try{
        // if denominator=0 then escape try block & transfer control to catch block
        if(denominator == 0){
            throw denominator; //control is transfered at this line so result never gets calculated
        }
        result = numerator/denominator;
        cout<<"Result of division is : "<<result<<endl;
    }
    
    // int ex = stores the value which is thrown by try block i.e. denominator
    catch(int ex){
        cout<<"Exception: Divide by "<<ex<<" is not allowed"<<endl;
    }
   
    return 0;
}
