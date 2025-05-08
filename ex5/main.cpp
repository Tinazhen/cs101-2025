#include <iostream>
#include <string>

using namespace std;

class Car{
protected:
    string m_DriveMode;
private:
    int m_MaxSeating;
    int m_price;
    void m_UpdatePrice(int base= 500000){}
public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string brand, string model, int year, int seating):m_brand(brand),m_model(model),m_year(year), m_MaxSeating(seating) {}
    
    int get_MaxSeating(){
        return m_MaxSeating;
    }
    int get_Price(){
        return m_price;
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};
class BMW_Car : public Car {
public:
    
    BMW_Car(string model, int year, int seating) : Car("BMW", model, year, seating) {
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear - wheel";
    }

    string get_DriveMode() {
        return Car::get_DriveMode();
    }
};


class AUDI_Car : public Car {
public:
    
    AUDI_Car(string model, int year, int seating) : Car("Audi", model, year, seating) {
        cout << "Constructing AUDI_Car\n";
        m_DriveMode = "Front - wheel";
    }

    string get_DriveMode() {
        return Car::get_DriveMode();
    }
};


class BENZ_Car : public Car {
public:

    BENZ_Car(string model, int year, int seating) : Car("Benz", model, year, seating) {
        cout << "Constructing BENZ_Car\n";
        m_DriveMode = "Front - wheel";
    }


    string get_DriveMode() {
        return Car::get_DriveMode();
    }
};
int main() {
    BMW_Car bmw("X5", 2025, 5);
    cout << "BMW : Drive Mode = " << bmw.get_DriveMode() << endl;

    AUDI_Car audi("A6", 2025, 5);
    cout << "Audi : Drive Mode = " << audi.get_DriveMode() << endl;

    BENZ_Car benz("C - Class", 2025, 5);
    cout << "Benz : Drive Mode = " << benz.get_DriveMode() << endl;

    return 0;
}
