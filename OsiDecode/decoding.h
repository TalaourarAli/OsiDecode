#ifndef DECODING_H
#define DECODING_H
#include <string>

using namespace std;

class Decoding
{
    string s,str;
    string fanion="01111110";
    void unset0bit();
    void Unfanion();
    void bin2str();
public:
    Decoding(string);
    string decode();
};

#endif // DECODING_H
