#include "MyStack.h"
#include <string>

int main()
{
    myStack::Stack<std::string> p34;
    p34.push_back("Students");
    p34.push_back("of");
    p34.push_back("the");
    p34.push_back("group");
    p34.push_back("P34");
    p34.showStack(); //"Students", "of", "the", "group", "P34"
    cout << endl;

    p34.pop_back();
    p34.showStack();//"Students", "of", "the", "group"

    cout << "--------------------------------\n\n";
    //Розвантаження стеку
    while (!p34.isEmpty()) {
         
        if (p34.top().size() == 2)
            cout << p34.top() << " ";

        p34.pop_back();
    }
    cout << endl;
    p34.showStack();
}
