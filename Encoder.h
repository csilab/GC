#ifndef ENCODER_H
#define ENCODER_H

#include "GF.h"
#include <NTL/mat_ZZ_p.h>
#include <vector>
using namespace NTL;
using namespace std;

class Encoder: public GF
{
public:
    Encoder(int mlen, int numVec, int lengthExtension = 1);
    ~Encoder();
    int numVec;
    Mat<ZZ_p> enVec;
    void setEnVec(int numVec);
    void toString();
    Vec<ZZ_p> paritize(Vec<ZZ_p> data);
    Vec<ZZ_p> paritize(string s);
    Vec<ZZ_p> bin2zz(vector<string> v);
    string zz2bin(ZZ_p zz, int size);
    string zz2bin(long n, int size);
    vector<string> zz2bin(Vec<ZZ_p> vec, int size);
    vector<string> zz2bin(Vec<ZZ_p> vec, vector<int> size);
    vector<string> breakString(string s, vector<long> dels = vector<long>());
    string randBin();
    string erase(string &s, long idx);
    string erase(string s, vector<long> idxs);
};


#endif // ENCODER_H
