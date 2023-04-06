#include <array/array.h>
#include <iostream>
using namespace std;
using namespace array_cpp;
static char data_structure_type[10] = {"Array"};
int main() {
    Array array;
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
                array.arrayInit();
                break;
            case 2:
                array.showArray();
                break;
            case 3:
                array.readOne();
                break;
            case 4:
                array.addData();
                array.showArray();
                break;
            case 5:
                array.deleteData();
                array.showArray();
                break;
            case 6:
                array.updateData();
                array.showArray();
                break;
            default:
                cout<<"No such operation! Please input again\n"<<endl;
                break;
        }
    }
}
