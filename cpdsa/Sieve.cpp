#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 1e6;
const int SIZE = 1e6 + 1;
bool tb[SIZE_N];

void sieve(vector<long long> &v) {
  for (long long i = 2; i * i <= SIZE; i++) {
    if (tb[i] == 0) {
      v.push_back(i);
      for (long long j = i * i; j * j <= SIZE; j += i) {
        tb[j] = 1;
      }
    }
  }
}

int main() {
  vector<long long> prime;
  sieve(prime);

  for (int i = 0; i < (int)prime.size(); i++) {
    cout << prime[i] << ' ';
  }
  cout << endl;

  return 0;
}
