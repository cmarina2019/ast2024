/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#ifndef LIGHTLEVEL_H 
#define	LIGHTLEVEL_H

using namespace std;

class LightLevel : public BDSensor{
  public:
    vector<int> requestData();
    ~LightLevel();
    private:


};

#endif
