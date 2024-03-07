/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#ifndef BDSENSORES_H
#define BDSENSORES_H

#include <string>
using namespace std;

class BDSensores {
  public:
    BDSensores();
    void setActive(bool);
    bool isActive()
    string getType();
    virtual vector<int> requestData() = 0;

  private:
    bool active;
    string type;
    vector <int> data;

      
    void addNewData(int);
    void removeOldData(int);
};

#endif // BDSENSORES_H

