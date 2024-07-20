#include <iostream>
#include "UnionFind.hpp"

using namespace std;

int main() {
  cpdsa::QU qu(10);

  cout << "Is 1, 2 connected ? " << (qu.isc(1, 2) ? "Yes" : "No") << endl;
  cout << "Connect 1, 2 ..." << endl;
  qu.connect(1, 2);
  cout << "Is 1, 2 connected ? " << (qu.isc(1, 2) ? "Yes" : "No") << endl;

  cout << "Is 1, 3 connected ? " << (qu.isc(1, 3) ? "Yes" : "No") << endl;
  cout << "Connect 2, 3 ..." << endl;
  qu.connect(2, 3);

  cout << "Is 1, 3 connected ? " << (qu.isc(1, 3) ? "Yes" : "No") << endl;

  return 0;
}
