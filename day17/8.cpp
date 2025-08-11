//shallow copy
#include<iostream>
using namespace std;

class car{
    public:
        string name;
        string color;
        int *mileage;
    car(string name, string color) {
        this->name=name;
        this->color=color;
        mileage = new int;//dynamic allocation
        *mileage=12;
    }

    car(car &original){
        cout<<"copying original to new";
        name=original.name;
        color=original.color;
        mileage=original.mileage;//shallow
    }
   
};
int main() {
    car c1("maruti 800", "white");
    car c2(c1);
    cout<< c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c1.mileage;


    return 0;
}

/*
==========================
🔁 SHALLOW COPY vs DEEP COPY
==========================

🧠 What is a Copy Constructor?
A special constructor that is used to create a new object as a copy of an existing object:
    ClassName (const ClassName &obj) { ... }

------------------------------------
🔄 SHALLOW COPY
------------------------------------
✅ Copies all values from one object to another
❌ But if there's a pointer, only the address is copied — NOT the data

📌 Result: 
- Both objects point to the SAME memory for pointer variables
- Changing one affects the other

🧪 Example:
car c1("Maruti", "White");
car c2(c1);  // Shallow copy

*c2.mileage = 10; 
cout << *c1.mileage;  // ❗ Will print 10 too → BAD

------------------------------------
✅ DEEP COPY
------------------------------------
✅ Copies values of all properties, INCLUDING dynamically allocated memory
✅ Creates NEW memory for pointers

📌 Result:
- Objects are completely INDEPENDENT
- Changes to one don’t affect the other

🧪 Example:
car(car &original){
    mileage = new int;
    *mileage = *original.mileage;
}

car c1("Maruti", "White");
car c2(c1);  // Deep copy

*c2.mileage = 10;
cout << *c1.mileage;  // ✅ Still 12

------------------------------------
📦 Summary:

| Feature            | Shallow Copy                        | Deep Copy                          |
|-------------------|-------------------------------------|------------------------------------|
| Pointer handling  | Copies address (same memory)        | Copies value (new memory)         |
| Safety            | ❌ Risky (shared memory)             | ✅ Safe (independent memory)       |
| Default behavior  | Done automatically by compiler      | Must be implemented manually      |

🛠 Pro Tip:
Always use deep copy if your class uses `new` for dynamic memory allocation!
*/
