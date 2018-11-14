#include "coding.h"
#include <iostream>

Coding::Coding(string _s):s(_s){}

void Coding::str2bin(){

    for(char c:s){
        string ch="";
        for(int j=0;j<8;j++){
            ch= ((1<<j & c)!=0 ? "1":"0") +ch;
            //ch=u+ch;
        }
        bins+=ch;
    }
}


void Coding::addFanion(){
    bins=fanion+bins+fanion;

}

void Coding::set0bit(){
    int count=0;
    string ret;
    for(size_t i=0;i<bins.size();i++){
        if(bins[i]=='1')count++;
        else count=0;
        if(count==5) {// insert 0
            cout << "adding 0"<<endl;
            bins=bins.insert(i+1,"0");
            count=0;
        }
    }
}

string Coding::coder(){
    str2bin();
    set0bit();
    addFanion();
    return bins;
}
