// 8��-6.FOREIGN.CPP   8.2 ���� Binding�� �Ұ�   
#include <iostream>
using namespace std;
class Person{
protected:
   const char * name;
public:
    Person (const char* n) : name (n)
    { }
   // virtual void Print (){
	void Print() {
        cout << "Person::�� �̸��� " << name << endl;
    }
};

class Foreigner : public Person{
public:
    Foreigner (const char* n) : Person (n)
    { }    

    void Print (){
        cout << "Foreigner::My name is " << name << endl;
    }
} ;
void main(){
    Person * man;
    Person * woman;

    man = new Person ("John");
    woman = new Foreigner ("Paola");
    
    cout << "Prints the name of the man:" << endl;
    man -> Print ();
    cout << "Prints the name of the woman (a foreigner):" << endl;
    woman -> Print ();

    man = new Foreigner ("Mario");
    cout << endl;
    cout << "Re-prints the name of the man after the new assignment:"           << endl;
    man -> Print ();
	system("pause");
}