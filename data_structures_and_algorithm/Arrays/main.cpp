#include <iostream>
#include "Arrays.h"
using namespace std;
static char data_structure_type[10] = {"Arrays"};
int main() {
    Arrays arrays;
    short operatorNumber;
    while (true)
    {
        cout<<"Select the "<<data_structure_type<<" operation:\n";
        cout<<"*** 1. "<<"Initialize "<<data_structure_type<<".\n";
        cout<<"*** 2. "<<"Show complete "<<data_structure_type<<".\n";
        cout<<"*** 3. "<<"Read one of "<<data_structure_type<<".\n";
        cout<<"*** 4. "<<"Add data of "<<data_structure_type<<".\n";
        cout<<"*** 5. "<<"Delete data of "<<data_structure_type<<".\n";
        cout<<"*** 6. "<<"Update data of "<<data_structure_type<<".\n";
        cout<<"*** 7. "<<"Exit.\n";
        cin>>operatorNumber;
        if(operatorNumber == 7) {return 0;}
        switch(operatorNumber){
            case 1:
                arrays.arraysInit();
                break;
            case 2:
                arrays.showArrays();
                break;
            case 3:
                arrays.readOne();
                break;
            case 4:
                arrays.addData();
                arrays.showArrays();
                break;
            case 5:
                arrays.deleteData();
                arrays.showArrays();
                break;
            case 6:
                arrays.updateData();
                arrays.showArrays();
                break;
            default:
                cout<<"No such operation! Please input again\n"<<endl;
                break;
        }
    }
}
