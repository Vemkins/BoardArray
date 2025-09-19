#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT

            if(index < SIZE){
                
                int i;
                for(int i=index-1; i>=0; i--){
                    if(array[i].compare(entry))
                        array[i+1] = array[i];
                    else
                        break;
                }
                
                array[i+1] = *entry;
                index++;
            }

           // else cout << entry << "'s score is too low to be added!";
            
        
            
        
            return;
        }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};