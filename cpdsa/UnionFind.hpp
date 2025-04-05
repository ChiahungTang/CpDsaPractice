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

    int getSize(int v) {
      while (buf[v] != v) {
        v = buf[v];
      }
      return weight[v];
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

      if (u == v) {
        return;
      }

      if (weight[u] < weight[v]) {
        buf[u] = v;
        weight[v] += weight[u];
      } else {
        buf[v] = u;
        weight[u] += weight[v];
      }
    }
};

} // namespace cpdsa

#endif
