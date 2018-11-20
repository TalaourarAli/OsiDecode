#include <QCoreApplication>
#include <string>
#include<iostream>
#include <coding.h>
#include <decoding.h>
using namespace std;

int main()
{
    string S="hello word";
    Coding c(S);
    string coded=c.coder();
    cout << "original string :"<<S<<endl;
    cout<<"coded string (to send) :"<<coded<<endl;
    Decoding d(coded);
    cout <<"encoded string received :"<<d.decode()<<endl<<endl;
    return 0;
}
