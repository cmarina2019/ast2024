/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#ifndef HUMIDITY_H 
#define	HUMIDITY_H

using namespace std;

class Humidity : public BDSensor{
  public:
    vector<int> requestData();
    ~Humidity();
  private:

};

#endif
