#include <iostream>

#include "Vehicle.h"
using namespace std;
#include <vector>
#include<set>
#include"Hybrid.h"
#include"Bicycle.h"
#include<algorithm>


int main() {
    int nOfSerie = 0;
    Vehicle v1;
    int year;
    string color,type;


    vector<Bicycle>b1;
    string typeB1="racing";
    string typeB2="exercise";
    string typeB3="montain";
    Bicycle b;


    cout << "Insertion for Bicycle:\nyear,color,type\n";
    cin >> year>>color>>type;
   if(type==typeB1 || type==typeB2||type==typeB3) {
       b.setyear(year);
       b.setcolor(color);
       b.setbicycleType(type);
       b1.push_back(b);
       for(int i=0; i < b1.size(); i++) {
           cout<<"valores:"<<endl;
           cout << b1[i].getyear() << " ";
           cout << b1[i].getcolor() << " ";
           cout << b1[i].getbicycleType() << " ";

           sort(b1.begin(), b1.end());
           cout << "\nBikes:\n";
           for(auto b: b1)
               cout << b << endl;
       }

   }else {
       cout<<"the 3 types possibles is :racing, exercise, montain for bycicle"<<endl;
   }



    /*cout << "\nInsertion for Hybrid:\nyear,number of wheels,color,battery life,cylinder volume\n";
    Hybrid h;
    vector<Hybrid>h1;
    cin >> h;
    cout << h << endl;*/

    //~ Available bikes
    /*vector<Bicycle> bikes;
    bikes.push_back(Bicycle(2012, "red", "mountain"));
    bikes.push_back(Bicycle(2005, "yellow", "racing"));
    bikes.push_back(Bicycle(2012, "red", "mountain")); //another
    identical bike (not the same bike)
    */

     sort(bikes.begin(), bikes.end());
    cout << "\nBikes:\n";
    for(auto b: bikes)
        cout << b << endl;

    //Hybrid vehicles
    vector<Hybrid> hv;
    hv.push_back(Hybrid(2018, 4, "blue", 1800, 100));
    hv.push_back(Hybrid(2016, 4, "green", 1600, 120));
    hv.push_back(Hybrid(2016, 4, "black", 1900, 90));

    sort(hv.begin(), hv.end());
    cout << "\nHybrid vehicles:\n";
    for(auto h: hv)
        cout << h << endl;
    return 0;
}

