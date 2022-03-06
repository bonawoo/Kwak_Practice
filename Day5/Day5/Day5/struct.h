#ifndef STRUCT
#define STRUCT

#include <iostream>
#include <string>

using namespace std;

struct MyStruct
{
	string name;
	int age;
};

void display(MyStruct&);

#endif