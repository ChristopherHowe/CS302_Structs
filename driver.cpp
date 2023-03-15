#include "linkedList.h"
#include "arrayList.h"
#include "linkedQueue.h"
#include "arrayQueue.h"
#include "linkedStack.h"
#include "arrayStack.h"

#include <iostream>
using namespace std;


class Apple{
    public:
    string color;
    Apple(string col){
        color = col;
    }

};

void displayStack(LinkedStack<Apple> &ls);


int main(){
    LinkedStack<Apple> ls;
    ls.push(Apple("Red"));
    ls.push(Apple("Green"));
    ls.push(Apple("Blue"));
    
    LinkedStack<Apple> ts(ls);
    displayStack(ls);
    displayStack(ts);

    return 0;
}

void displayStack(LinkedStack<Apple> &ls){
    cout << "stack: " << endl;
    int i=1;
    while(!ls.isEmpty()){
        cout << i << ". " << ls.peek().color << endl;
        ls.pop();
        i++;
    }
}