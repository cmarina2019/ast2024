/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
using namespace std;
#ifndef RGBCAMERA_H 
#define	RGBCAMERA_H 

class RGBCamera : public BDSensor{
  public:
    vector<int> requestData();
    ~RGBCamera();
  private:

};

#endif
