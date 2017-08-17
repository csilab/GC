//
// Created by HIEU NGUYEN on 8/14/17.
//

#ifndef GC_C_CASEGENERATOR_H
#define GC_C_CASEGENERATOR_H

#include <NTL/ZZ_p.h>
#include <vector>
using namespace NTL;
using namespace std;

class CaseGenerator {
public:
    CaseGenerator();
    vector<Vec<ZZ_p>> pprimeMat;
    Vec<ZZ_p> *pprime;
    vector<long> dels;
    bool next();


};


#endif //GC_C_CASEGENERATOR_H
