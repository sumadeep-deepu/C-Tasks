#include<iostream>
#include<string>
using namespace std;

class Vehicle {
private:
    string brand;
    int year;

public:
    Vehicle(const string& brand, int year) : brand(brand), year(year) {}

    void displayInfo() const {
        cout << "Brand : " << brand << ", Year : " << year << endl;
    }

    virtual void horn() const {
        cout << "Vehicle horn" << endl;
    }

    string getBrand() const {
        return brand;
    }

    int getYear() const {
        return year;
    }
};

class Car : public Vehicle {
private:
    string model;

public:
    Car(const string& brand, int year, const string& model) : Vehicle(brand, year), model(model) {}

    void horn(int level) const {
        cout << "Car Horn with level " << level << "!" << endl;
    }
};

class Bicycle : public Vehicle {
private:
    int gears;

public:
    Bicycle(const string& brand, int year, int gears) : Vehicle(brand, year), gears(gears) {}

    void horn() const override {
        cout << "Bicycle-bell rings !!!!" << endl;
    }
};

int main() {
    Car myCar("Toyota", 2002, "cramy");
    Bicycle myBiCycle("Hercules", 2003, 12);

    myCar.displayInfo();
    myBiCycle.displayInfo();

    myCar.horn(2);
    myBiCycle.horn();

    return 0;
}
