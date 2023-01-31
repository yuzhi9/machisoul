#pragma once
#ifndef ARRAYS_ARRAYS_H
#define ARRAYS_ARRAYS_H
#define MAX_SIZE 100
namespace arrays 
{

typedef struct {
    char name[10];
    int age;
}Student;

class Arrays {
private:
    Student data[MAX_SIZE];
    int length;
public:
    Arrays();
    short arraysInit();
    void showArrays();
    void readOne();
    short addData();
    short deleteData();
    short updateData();
    ~Arrays();
};

}

#endif //ARRAYS_ARRAYS_H
