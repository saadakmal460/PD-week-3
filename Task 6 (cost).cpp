#include <iostream>
using namespace std;

main(){


 float size;
 float cost;
 float area;
 float costPerPound;
 float costPerSquareFeet;



 cout << "Enter Bag Size in pound: " ;
 cin >> size;
 cout << "Enter cost of the bag: ";
 cin >> cost;
 cout << "Enter area covered by each bag in square feet: ";
 cin >> area;

 cout << "________________________________________________________________________" <<endl;


 costPerPound = cost/size;
 costPerSquareFeet = cost/area;

 cout << "Cost of fertilizer per pound: " <<costPerPound <<endl;
 cout << "Cost of fertilizing the area per square feet: "<<costPerSquareFeet;






 


}