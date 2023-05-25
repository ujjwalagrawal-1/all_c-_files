#include <iostream>
using namespace std;
class data{
  private:
  string dob;
  int weight;
  public:
  string name;
  int age;
  int gender;


  void sleep(){
    cout<<"I was Sleeping With him last night"<<endl;
  }
  void getdob(string getdob){
    dob = getdob;
  }
  void printdob(){
    cout<<dob;
  }
  void inputweig(int weight){
    this->weight = weight;
  }
  void outputweig(){
    cout<<weight<<endl;

  }
};

int main() {
  // int arr [4] = {1,2,3,4};
  // int* p = arr;
  // cout<<*(arr + 1);
  // data ujjwal;
  // cin>>ujjwal.age;
  // cout<<ujjwal.age;
  // string dob1;
  // cin>>dob1;
  // ujjwal.getdob(dob1);
  // ujjwal.printdob();
  //Dynamic Memory
  data* ujjwal = new data;
  cin>>(*ujjwal).age;
  // ujjwal->age = 17;
  cout<<ujjwal->age<<endl;;
  int a;cin>>a;
  ujjwal->inputweig(a);
  ujjwal->outputweig();
}