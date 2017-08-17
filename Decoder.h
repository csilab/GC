/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Decoder.h
 * Author: hn
 *
 * Created on August 10, 2017, 12:55 PM
 */

#ifndef DECODER_H
#define DECODER_H
#include "Encoder.h"
#include <iostream>
using namespace std;

class Decoder: public Encoder{
public:
    Decoder(int mlen, int numDel, int numChecker, int lengthExtension);
    void decode(string &s,Vec<ZZ_p>p);
    bool CaseGenFast_rec(long first, long last, long idx, Vec<ZZ_p> pprime, vector<long> root, vector<Vec<ZZ_p>> d);
    vector<Vec<ZZ_p>> baseCase(string s);
    bool solveGC(Vec<ZZ_p> pprime, vector<long> dels);
    bool solveGC(Vec<ZZ_p> pprime, long dels);
    void print(vector<long> vec, string name);
    Vec<ZZ_p> x;
    string* s;
    int numDel;
private:

};

#endif /* DECODER_H */

