#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Map
{
  public:
    vector< pair<string,int>* > Array;
    Map();
    int hash(string str);
    void put(string key, int value);
    int get(string key);
    void clear();
    int getSize();
    bool isEmpty();
};


#endif // MAP_H
