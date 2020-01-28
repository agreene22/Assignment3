/*
Anna Greene
Pet.h
Header file to declare methods
 */
#include <iostream>
#include <string>
using namespace std;

class Pet{
public:
  Pet(); // Default constructor
  Pet(string name, int age, string type, double weight); // Overloaded constructor

  // Accessor methods for member variables
  string getName();
  int getAge();
  string getType();
  double getWeight();

  // mutator methods for member variables
  void setWeight(double weight);
  void setName(string name);
  void setAge(int age);
  void setType(string type);

private:
  // Member variables
  string m_name;
  int m_age;
  string m_type;
  double m_weight;
};
