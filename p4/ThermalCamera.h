/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
using namespace std;
#ifndef THERMALCAMERA_H 
#define	THERMALCAMERA_H 

class ThermalCamera : public BDSensor{
  public:
    vector<int> requestData();
    ~ThermalCamera();
  private:

};

#endif
