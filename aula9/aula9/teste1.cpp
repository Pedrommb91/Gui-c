//
// Created by guilh on 22/05/2024.
//
#include <iostream>
#include <string>
#include <vector>
#include "Bicycle.h"
#include<algorithm>
#include"Vehicle.h"
#include "Hybrid.h"
#include "Electric.h"

using namespace std;

int main() {
    int year;
    string color, type;
    vector<Bicycle> b1;


    cout << "Insertion for Bicycle:\nyear,color,type\n";
    Bicycle b;
    cin >> year >> color >> type;

    b.setyear(year);
    b.setcolor(color);
    b.setbicycleType(type);
    b1.push_back(b);

    for(int i=0;i<b1.size();i++) {
        cout << b1[i].getyear() << endl;
        cout << b1[i].getcolor() << endl;
        cout << b1[i].getbicycleType() << endl;
    }


    cout << "\nInsertion for Hybrid:\nyear,number of wheels, color, batterylife, cylinder volume\n";
    Hybrid h;
    int nOfWheels,cilinderVolume;
    string batteryLife;
    vector<Hybrid>h1;

    cin >> nOfWheels>>color>>batteryLife>>cilinderVolume;
    h.setnOfWheels(nOfWheels);
    h.setcolor(color);
    h.setbacteryLife(batteryLife);
    h.setcylinderVolume(cilinderVolume);
for(int i=0; i<h1.size();i++) {
    cout << h1[i].getnOfWheels() << endl;
    cout << h1[i].getcolor() << endl;
    cout << h1[i].getbacteryLife() << endl;
    cout<<h1[i].getcylinderVolume()<<endl;
}
    //cout << h << endl;


    //~ Available bikes
    //vector<Bicycle> bikes;
    b1.push_back(Bicycle(2012, "red", "mountain"));
    b1.push_back(Bicycle(2005, "yellow", "racing"));
    b1.push_back(Bicycle(2012, "red", "mountain")); //another identical bike(not the same bike)

    sort(b1.begin(), b1.end());
    cout << "\nBikes:\n";
    for (auto b: b1) {
        cout << b << endl;
    }
}

