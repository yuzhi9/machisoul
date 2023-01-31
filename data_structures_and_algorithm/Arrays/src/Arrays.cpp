//
// Created by yuzhi on 11/30/2022.
//

#include "Arrays.h"
#include "iostream"
#include <string.h>

using namespace std;

Arrays::Arrays() {
    this->length = 0;
    cout << "Created a Arrays instance!" << endl;
}

Arrays::~Arrays() {
    cout << "Destory a Arrays instance!" << endl;
}

short Arrays::arraysInit() {
    char nameTemp[10];
    int ageTemp;
    cout << "Please input the data, format is: \"name age\"" << endl;
    while (cin >> nameTemp) {
        if (this->length >= MAX_SIZE) { return 1; }
        if (strcmp(nameTemp, "null") == 0) { return 0; }
        cin >> ageTemp;
        strcpy(this->data[length].name, nameTemp);
        this->data[length].age = ageTemp;
        this->length++;
    }
}

void Arrays::showArrays() {
    for (int i = 0; i < this->length; i++) {
        cout << "[" << i + 1 << ". " << this->data[i].name << " " << this->data[i].age << "]------";
    }
    cout << "\n\n\n";
}

void Arrays::readOne() {
    int dataNumber;
    cout << "Please input the data number you want read:" << endl;
    cin >> dataNumber;
    if (dataNumber > this->length) {
        cout << "haven't this data!!" << endl;
        cout << "\n\n\n";
        return;
    }
    cout << "[" << this->data[dataNumber - 1].name << " " << this->data[dataNumber - 1].age << "]" << endl;
    cout << "\n\n\n";
}

short Arrays::addData() {
    char nameTemp[10];
    int ageTemp;
    int dataNumber;
    cout << "Please input the data, format is: \"dataNumber name age\"" << endl;
    cin >> dataNumber;
    if (this->length >= MAX_SIZE) { return 1; }
    if (dataNumber == 0) { return 0; }
    cin >> nameTemp;
    cin >> ageTemp;
    for (int i = this->length; i >= dataNumber; i--) {
        this->data[i] = this->data[i - 1];
    }
    strcpy(this->data[dataNumber - 1].name, nameTemp);
    this->data[dataNumber - 1].age = ageTemp;
    this->length++;
}

short Arrays::deleteData() {
    int dataNumber;
    cout << "Please input the data number you want delete:" << endl;
    cin >> dataNumber;
    if(dataNumber > this->length){
        cout << "haven't this data!!" << endl;
        cout << "\n\n\n";
        return 1;
    }
    for(int i = dataNumber -1; i < this->length; i++)
    {
        strcpy(this->data[i].name, this->data[i+1].name);
        this->data[i].age = this->data[i+1].age;
    }
    this->length--;
    return 0;
}

short Arrays::updateData() {
    char nameTemp[10];
    int ageTemp;
    int dataNumber;
    cout << "Please input the data you want update, the format is \"dataNumber name age\"" << endl;
    cin >> dataNumber;
    cin >> nameTemp;
    cin >> ageTemp;
    if (dataNumber > this->length) { return 1; }
    strcpy(this->data[dataNumber - 1].name, nameTemp);
    this->data[dataNumber - 1].age = ageTemp;
}