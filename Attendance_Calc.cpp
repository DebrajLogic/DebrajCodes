
#include<iostream>
using namespace std;

int main()
{
    int j=0;
    int k=0;
    int a,t;
    int y=0;
    float x,z,drop;
    int integer=100;
  const int safe=75;



        cout<<"Classes Attended: ";
        cin>>a;
        cout<<"\n Total Classes: ";
        cin>>t;
cout<<"Attend Section:"<<"\n";
 while(y<safe)
    {

         x=(((float)(a+k)/((float)(t+k))))*100;
        //cout<<x<<"\n";
          y=x;
        //cout<<y<<"\n";cout<<"Classes Needed = "<<k<<"\n";
         z=(x-y);
        //cout<<z<<"\n";
        if(z>0)
        {
            y++;
        }
        if(k==0)
        {
            cout<<"Current Attendance = "<<y<<"%"<<"\n";

        }
        else
        {
            cout<<"Class"<<k<<": "<<y<<"%"<<"\n";
        }
        k++;
    }
cout<<"Classes Needed = "<<(k-1)<<"\n";
cout<<"  \n  ";
cout<<"Drop Section:"<<"\n";
do
        {

            drop=(((float)(a)/((float)(t+j))))*100;
            //cout<<drop<<"\n";

            integer=drop;
            //cout<<integer<<"\n";
            float fraction=(drop-integer);
            //cout<<fraction<<"\n";
            if(fraction>0)
            {
                integer++;
            }

            if(j>0)
            {
            cout<<"Class"<<j<<":"<<integer<<"%"<<"\n";
            }
            j++;
            }
            while(integer>safe + 1);

            cout<<"Extra Classes = "<<(j-1)<<"\n";

    return 0;
}