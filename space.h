#include <string>
#include <iostream>

using namespace std;

class Space 
{
private:
  string name;
public:
  virtual void do_action() { cout << "ERROR: called do_action() on space";};
  string get_name() { return name;};
};
