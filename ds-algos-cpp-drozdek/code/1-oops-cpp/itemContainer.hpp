#include <iostream>
#include <vector>
#include <string>

template<class T, int size = 200>
class ItemContainer {
    T items[size];

    public:
        int getSize() {
            return size;
        }

        T getItemAtIndex(int index) {
            T value;

            if(index >= size) {
                return value;
            } else {
                return items[index];
            }

        }

        void addItem(T newItem, int index) {
           items[index] = newItem;
        }
};