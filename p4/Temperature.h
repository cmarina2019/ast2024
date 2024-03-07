/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#ifndef TEMPERATURE_H 
#define	TEMPERATURE_H

using namespace std;

class Thermometer : public BDSensor{
  public:
    vector<int> requestData();
    ~Thermometer();
    private:


};

#endif
