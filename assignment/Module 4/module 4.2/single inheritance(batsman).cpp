#include<iostream>
using namespace std;
class cricketer                         //cricketer class -base class
{
    protected:
    string bts;                         //only variable declared in 
    int truns[5],avgrun,bestp,i,total=0;
    
};

class batsman : public cricketer         //derived class
{   
    public:
    void data()                        //data is member function
    {
      
      cout<<"Enter Batsman name :";
      cin>>bts;
      for(i=0;i<3;i++)
      {
        cout<<"Enter Match "<<i+1 <<"Runs : ";
        cin>>truns[i];
        total+=truns[i];               //total runs using assignment operator
      }
      
      avgrun=total/3;                 //average runs
      
      bestp = 5;
      for(i= 0 ; i < 3 ; i++)          // calculation of best performance
        {
          if(truns[i] >= truns[1])
          {
            bestp = truns[i];
          }

        }
      
    }
    void showdata()
    {
        cout<<"Batsman name : "<<bts<<endl;
        cout<<"Total Run : "<<total<<endl;
        cout<<"Average Run : "<<avgrun<<endl;
        cout<<"Best Performance : "<<bestp<<endl;
    }

};
int main()
{
    batsman obj;
    obj.data();
    obj.showdata();
}