#include<iostream>
using namespace std;

class Quadrilateral {
private:
    int feet;
    int inches;
public:
    Quadrilateral() {
        feet = 0;
        inches = 0;
    }

    void SetValue(int feet, int inches) {
        this->feet = feet; 
        this->inches = inches;
    }

    Quadrilateral operator+(Quadrilateral &other) {
        Quadrilateral result;
        result.feet = feet + other.feet;
        result.inches = inches + other.inches;
        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches %= 12;
        }
        return result;
    }

    int getFeet() {
        return feet;
    }

    int getInches() {
        return inches;
    }
};

int main() {
    Quadrilateral side1, side2, side3, side4;
    
    side1.SetValue(5, 6);
    side2.SetValue(3, 9);
    side3.SetValue(4, 2);
    side4.SetValue(2, 8);
    
    Quadrilateral perimeter = side1 + side2 + side3 + side4;
    
    cout << "Perimeter: " << perimeter.getFeet() << " feet " << perimeter.getInches() << " inches" << endl;
    cout<<"Ujjwal Agrawal"<<endl;
    cout<<"Roll No. 22118107";
}