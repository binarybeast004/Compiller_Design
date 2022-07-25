#include<iostream>
using namespace std;

int main()
{
    string S1, S2;

    cout << "enter S1"<<endl;
    cin>>S1;
    cout << "enter S2"<<endl;
    cin>>S2;
   string str_inp1(S1);
   string str_inp2(S2);

cout<<"String 1:"<<str_inp1<<endl;
cout<<"String 2:"<<str_inp2<<endl;
int res = str_inp1.compare(str_inp2);

    if (res == 0)
        cout << "\nBoth the input strings are same." << endl;

        else
        cout<<"String are not same";
}

