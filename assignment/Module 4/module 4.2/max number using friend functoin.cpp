#include<iostream>
using namespace std;
class swape{
    int a, b, t;
    public:
    friend int values(swape frnd);
};
int values(swape frnd)
{
    cout<<"Enter value of a:"<<endl;
    cin>>frnd.a;
    cout<<"Enter value of b:"<<endl;
    cin>>frnd.b;
    
    if(frnd.a > frnd.b)
    {
        cout<<"Value of a: "<<frnd.a<<" is max."<<endl;
    }
    else{
        cout<<"Value of b:"<<frnd.b<<" is max."<<endl;
    }
    
    return 0;
    
}
int main() {
       swape obj;
       values(obj);
       return 0;
}