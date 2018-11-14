#include "decoding.h"
#include<iostream>
#include<stdlib.h>

Decoding::Decoding(string _s):s(_s){}

void Decoding::unset0bit(){
    int count=0;
    for(size_t i=0;i<s.size();i++){
        if(s[i]=='1')count++;
        else count=0;
        if(count==5) {// erase 0
            if(s[i+1]=='0'){
                cout <<"removing 0"<<endl;
                s=s.erase(i+1,1);
            }
            count=0;
        }
    }
}
void Decoding::Unfanion(){
    s=s.erase(0,8);
    s=s.erase(s.size()-8,s.size()-1);
}
void Decoding::bin2str(){
    for(size_t j=0;j<s.size();j+=8){
        string lol="";
        for(size_t i=0;i<8;i++)lol+=s[j+i];
        str+=stoi(lol,nullptr,2);
    }
}
string Decoding::decode(){
    Unfanion();
    unset0bit();
    bin2str();
    return str;
}
