#include <iostream>
#include <string>
using namespace std;

class Pet{
public:
  Pet();

  string getName();
  int getAge();
  string getType();
  double getWeight();

  void setWeight(double weight);
  void setName(string name);
  void setAge(int age);
  void setType(string type);

private:
  string m_name;
  int m_age;
  string m_type;
  double m_weight;
};
