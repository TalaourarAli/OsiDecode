#ifndef CODING_H
#define CODING_H
#include<string>

using namespace std;

class Coding
{
    string s,bins="";
    string fanion="01111110";
    void str2bin();
    void addFanion();
    void set0bit();
    //void nrz();
public:
    Coding(std::string);
    string coder();
};

#endif // CODING_H
