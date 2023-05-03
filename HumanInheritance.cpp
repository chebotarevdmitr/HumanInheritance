#include <iostream>

using namespace std;

class Human {
public:
    Human() {
        name = "Human";
        cout << "Human()" << endl;
    }
    Human(const string& name):name(name){
        cout << "Human(string)" << endl;
    }
    void work() {
        cout << "Human" << name << " do work" << endl;
    }
    ~ Human() {
        cout << " ~ Human()" << endl;
    }
private:
    string name;
    friend string get_name(Human&);
 };
string get_name(Human& h) {
    return h.name;
}

class Doctor : public Human {
public:
    Doctor() {
        cout << "Doctor()" << endl;
    }
    Doctor(const string& name, const int kol):Human(name), kol_pacientov(kol){
        cout << "Doctor(string, int)" << endl;
    }
    ~Doctor() {
        cout << " ~ Doctor()" << endl;
    }
public:
    int kol_pacientov = 0;

};

int main()
{
    Doctor d ("Jack",10);
    d. work();


    
}
