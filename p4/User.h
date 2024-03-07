/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#include <string>
using namespace std;

#ifndef USER_H
#define USER_H

class User{
public:
  User(string number = "00000", string nif = "00000000", string name = "default");
  ~User();

  void setNIF(int NIF);
  int getNIF();
  void setID(int ID);
  int getID();
  void addTimestamp();
  string getTimestamp();

private:
  string ID;
  string NIF;
  string name;


};

#endif
