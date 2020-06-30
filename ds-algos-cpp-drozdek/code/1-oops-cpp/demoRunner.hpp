#include <iostream>
#include <vector>
#include <string>

#include "./itemContainer.hpp"
#include "./inheritance.hpp"

using namespace std;

class DemoRunner {
    public:

    static void sayHello() {

        vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

        for (const string& word : msg)
        {
            
            cout << word << " ";
        }
        cout << endl;
    }

    static void runInheritanceDemo() {
        // Use generics
        ItemContainer<int> intContainer;
        cout << "Size of intContainer1: " << intContainer.getSize() << endl;
        intContainer.addItem(111, 0);
        intContainer.addItem(222, 1);
        cout << "intContainer1: item at index 0: " << intContainer.getItemAtIndex(0) << endl;
        cout << "intContainer1: item at index 1: " << intContainer.getItemAtIndex(1) << endl;

        ItemContainer<string> stringContainer;
        cout << "stringContainer: item at index 0: " << stringContainer.getItemAtIndex(1000) << endl;

        ItemContainer<int, 50> intContainer2;
        cout << "Size of intContainer2: " << intContainer2.getSize() << endl;
    }
};