f

using namespace std;

int main()
{
    int number1,number2,add,diff,multi,divi,rem;
    
    cout<<"\n\n\n\t\t ********************CALCULATOR********************\n\n\n";
    cout<<"\n\n\n\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";
    cout<<"\n\n\t\t Enter First Number  -> ";
    cin>>number1;
    cout<<"\n\n\t\t Enter Second Number -> ";
    cin>>number2;
    
    add=number2+number1;
    diff=number2-number1;
    multi=number2*number1;
    divi=number2/number1;
    rem=number2%number1;
    
    cout<<"\n\n\n\t\t integer number1= "<<number1<<endl<<endl;
    cout<<"\n\t\t integer number2= "<<number2<<endl<<"\n";
    cout<<"\n\t\t addition of two integers= "<<add<<endl<<"\n";
    cout<<"\n\t\t difference of two integers= "<<diff<<endl<<"\n";
    cout<<"\n\t\t multpilication of two integers= "<<multi<<endl<<"\n";
    cout<<"\n\t\t division of two integers= "<<divi<<endl<<"\n";
    cout<<"\n\t\t remainder of two integers= "<<rem<<endl<<"\n";
    return 0;
}