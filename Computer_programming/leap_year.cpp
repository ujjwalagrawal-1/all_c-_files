#include<iostream>
using namespace std;
 class Quadilateral{
    private:
    int feet;
    int inches;
    Quadilateral(){
        this->feet = 0;
        this->inches = 0;
    }
    void set_data(int feet,int inches){
        this->feet = feet;
        this->inches = inches;
    }
    Quadilateral operator+(Quadilateral &obj){
        Quadilateral answer;
        answer.feet = feet + obj.feet;
        answer.inches = inches + obj.inches;
        if(answer.inches>=12){
            answer.feet += answer.inches/12;
            answer.inches %= 12;
        }
        return answer;
    }
    int get_feet(){
        return feet;
    }
    int get_inches(){
        return inches;
    }
    int main(){
        Quadilateral side1,side2,side3,side4;
        side1.set_data(2,4);
        side2.set_data(4,5);
        side3.set_data(5,5);
        side4.set_data(7,9);

        Quadilateral answer = side1+side2+side3+side4;
        cout<<"Answer is -->"<<answer.get_feet()<<"Feet"<<answer.get_inches()<<"Inches"<<endl;
    }
 };