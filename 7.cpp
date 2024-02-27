
#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(string n, string sp, int a) : name(n), species(sp), age(a) {}
    void setName(string n) { name = n; }
    void setSpecies(string sp) { species = sp; }
    void setAge(int a) { age = a; }
    string getName() const { return name; }
    string getSpecies() const { return species; }
    int getAge() const { return age; }
};
class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(string n, string sp, int a, string col, string br) : Animal(n, sp, a), color(col), breed(br) {}
    void setColor(string col) { color = col; }
    void setBreed(string br) { breed = br; }

    string getColor() const { return color; }
    string getBreed() const { return breed; }
};
class Dog : public Animal {
private:
    double weight;
    string breed;
public:
    Dog(string n, string sp, int a, double w, string br) : Animal(n, sp, a), weight(w), breed(br) {}
    void setWeight(double w) { weight = w; }
    void setBreed(string br) { breed = br; }
    double getWeight() const { return weight; }
    string getBreed() const { return breed; }
};
int main() {
    Cat cat("snoofy", "Cat", 5, "White", "Persian");
    Dog dog("charlie", "Dog", 3, 15.5, "Labrador");
    cout << "Cat Details:" << endl;
    cout << "Name: " << cat.getName() << endl;
    cout << "Species: " << cat.getSpecies() << endl;
    cout << "Age: " << cat.getAge() << endl;
    cout << "Color: " << cat.getColor() << endl;
    cout << "Breed: " << cat.getBreed() << endl;
    cout << "\nDog Details:" << endl;
    cout << "Name: " << dog.getName() << endl;
    cout << "Species: " << dog.getSpecies() << endl;
    cout << "Age: " << dog.getAge() << endl;
    cout << "Weight: " << dog.getWeight() << endl;
    cout << "Breed: " << dog.getBreed() << endl;

    return 0;
}

