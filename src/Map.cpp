#include "Map.h"

Map::Map()
{
    for(int i = 0; i < 999999 ; i++)
    {
        Array.push_back(new pair<string, int>("", -1));
    }
}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum+=str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{
    if(Array[hash(key)]->first == "" )
    {
        Array[hash(key)]->first = key;
        Array[hash(key)]->second = value;
        return;
    }

    Array[hash(key)]->second *= value;

}

int Map::get(string key)
{
    if(Array[hash(key)]->first != "")
      return Array[hash(key)]->second;
    return -1;

}

