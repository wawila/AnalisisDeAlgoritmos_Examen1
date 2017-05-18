#include "Test.h"
#include <iostream>
#include <map>
using namespace std;

bool exists(vector<int> avl_tree, int number)
{
  int index = 0;

  while(true)
  {
    if(avl_tree[index] == number) return true;
    index = avl_tree[index] > number ? index*2+1 : index*2+2;

    if(index >= avl_tree.size() ||
       index < 0)
        return false;
  }
}

BinaryNode* convertToLinkedTreeRec(vector<int> max_heap, int index)
{
    BinaryNode* root = new BinaryNode();

     if(index >= max_heap.size() ||
       index < 0)
        return NULL;

    root->value = max_heap[index];
    root->left_child = convertToLinkedTreeRec(max_heap, index*2+1);
    root->right_child = convertToLinkedTreeRec(max_heap, index*2+2);

  return root;
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
  return convertToLinkedTreeRec(max_heap, 0);
}



int main ()
{

  test();
  return 0;
}
