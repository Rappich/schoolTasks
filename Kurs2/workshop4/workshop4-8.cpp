#include <iostream>
#include <cstring> // For strncpy()

using namespace std;

struct StructPerson {
    char name[20];
    int age;
};

class ClassPerson {
public:
    char name[20];
    int age;
};

int main() {
    StructPerson personStruct;
    ClassPerson personClass;

    personStruct.age = 21;
    personClass.age = 22;

    strncpy(personStruct.name, "Knatte", sizeof(personStruct.name) - 1);
    strncpy(personClass.name, "Fnatte", sizeof(personClass.name) - 1);

    personStruct.name[sizeof(personStruct.name) - 1] = '\0';
    personClass.name[sizeof(personClass.name) - 1] = '\0';

    cout << "StructPerson: " << personStruct.name << ", Age: " << personStruct.age << endl;
    cout << "ClassPerson: " << personClass.name << ", Age: " << personClass.age << endl;

    return 0;
}
