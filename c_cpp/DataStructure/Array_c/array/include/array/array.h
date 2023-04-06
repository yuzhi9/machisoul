#pragma once
#ifndef ARRAY_C_H
#define ARRAY_C_H

/* Constants and types */
/*==========================================================*/
#define MAX_SIZE 100

/* Array node type */
/*==========================================================*/
typedef struct
{
    /* data */
    char name[20];
    int age;
}Student;

/* Array */
/*==========================================================*/
#define Array Student

/* Exported functions prototypes */
/*==========================================================*/
short arrayInit(Array* array);
void showArray(Array* array);
void readOne(Array* array);
short addData(Array* array);
short deleteData(Array* array);
short updateData(Array* array);


#endif // ARRAY_C_H