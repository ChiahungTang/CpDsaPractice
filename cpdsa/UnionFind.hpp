#ifndef CPDSAPRACTICE_UNIONFIND_HPP_
#define CPDSAPRACTICE_UNIONFIND_HPP_

#include <vector>

namespace cpdsa {

class QU {
  private:
    std::vector<int> buf;
    std::vector<int> weight;
    
  public:
    QU(int n) : buf(std::vector<int>(n)), weight(std::vector<int>(n)) {
      for (int i = 0; i < n; i++) {
        buf[i] = i;
        weight[i] = 1;
      }
    }

    bool isc(int u, int v) {
      while (buf[u] != u) {
        u = buf[u];
      }
      while (buf[v] != v) {
        v = buf[v];
      }
      
      return u == v;
    }

    void connect(int u, int v) {
      int pathu = 1;
      int pathv = 1;
      while (buf[u] != u) {
        u = buf[u];
        pathu++;
      }
      while (buf[v] != v) {
        v = buf[v];
        pathv++;
      }

      if (weight[u] < weight[v]) {
        buf[v] = u;
        weight[v] += weight[u];
        weight[u] = weight[v];
      } else {
        buf[u] = v;
      }
    }
};

} // namespace cpdsa

#endif
