#include<iostream>
using namespace std;
class leap
{
public:
    int n;
    void l_year()
    {
        cout<<"enter a year"<<endl;
        cin>>n;
        if(n%4==0)
        {
            if(n%100==0)
            {
                if(n%400==0)
                    cout<<"leap year"<<endl;
                else
                    cout<<"not a leap year";
            }
            else
                cout<<"leap year"<<endl;
        }
        else
            cout<<"not a leap year"<<endl;
    }
};
int main()
{
    leap obj;
    obj.l_year();
}
