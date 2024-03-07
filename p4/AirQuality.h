/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#ifndef AIRQUALITY_H 
#define	AIRQUALITY_H

using namespace std;

class AirQuality : public BDSensor{
  public:
    vector<int> requestData();
    ~AirQuality();
    private:


};

#endif
