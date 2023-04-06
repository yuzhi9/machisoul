#pragma once
#ifndef ARRAY_CPP_H
#define ARRAY_CPP_H
#define MAX_SIZE 100
namespace array_cpp 
{

typedef struct 
{
    /*data*/
    char name[10];
    int age;
}Student;

class Array 
{
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

#endif //ARRAY_CPP_H
