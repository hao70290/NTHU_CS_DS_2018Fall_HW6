#include "function.h"
#include <iostream>
#include <string.h>
#include <algorithm>


using namespace std;


int pow(int x, int y, int mod)
{
    int res = 1;
    while(y)
    {
        if(y & 1) res =  res * x % mod;
        x = x * x % mod;
        y = y / 2;
    }
    return res;
}

int hashFunction(const string &str){
    int index = 0;
    // Analyze
    for(int i=0 ; i<str.size() ; i++)
    {
        int temp = (int)str[i];
        index = ((index%41) + (((temp%41) * pow(13331, (int)str.size() - i - 1, 41))%41)%41)%41;
    }
    return index;
}

void Implement::Add(const string &str) {
    if(Exist(str))
        return;
	int index = hashFunction(str);
    table[index].push_back(str);
}


void Implement::Delete(const string &str){
    int index = hashFunction(str);
    std::list<string>::iterator findIter = std::find(table[index].begin(), table[index].end(), str);
    if (findIter != table[index].end()){
        table[index].remove(str);
        return;
    }
    else
        return;
}

bool Implement::Exist(const string &str){
    int index = hashFunction(str);
    std::list<string>::iterator findIter = std::find(table[index].begin(), table[index].end(), str);
    if (findIter != table[index].end())
        return true;
    else
        return false;
}


