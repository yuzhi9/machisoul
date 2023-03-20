#pragma once
#ifndef Array_Array_H
#define Array_Array_H
#define MAX_SIZE 100
namespace Array_cpp 
{

typedef struct {
    char name[10];
    int age;
}Student;

class Array {
private:
    Student data[MAX_SIZE];
    int length;
public:
    Array();
    short arrayInit();
    void showArray();
    void readOne();
    short addData();
    short deleteData();
    short updateData();
    ~Array();
};

}

#endif //Array_Array_H
