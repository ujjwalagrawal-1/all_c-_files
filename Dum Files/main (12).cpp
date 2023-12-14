#include <iostream>
using namespace std;
class car{
  private:
  string name;
  public:
  int wheel;
  string colour;
  // void getters(string a){
  //   this->a = name;
  // }

  //Default constructor
  car(){
    this->name = "VERNA";
    this->wheel = 4;
    this->colour;
  }

  // 2nd type
  car(string name,int wheel,string colour){
    this->name = name;
    this->wheel = wheel;
    this->colour =colour;
    }

  void setters(){
    cout<<name<<endl;
  }
  void print(){
    cout<<this->colour<<" " <<this->wheel<<" ";
  }

  class hyndai:public car{
    public:
    void printly(){
      cout<<this->wheel<<endl;
    }

  };
};

int main() {
  car verna;
  hyndai h1;
  h1.printly(); 
}