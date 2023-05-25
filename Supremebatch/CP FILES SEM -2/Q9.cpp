#include <iostream>
using namespace std;

//STATIC DATA MEMBER (using of static keyword);
// making of class
class car{
  public:
  static int a, b;
  // Initializing Member fuction
  void print(){
    cout<<a<<"  "<<b<<endl;
  }
  
  
  };
  int car::a;
  int car::b;
int main(){
  car volvo;
  volvo.a = 4;
  volvo.b = 5;
  volvo.print();
  car bmw;
  bmw.a = 6;
  bmw.b = 7;
  bmw.print();
  return 0;
  }