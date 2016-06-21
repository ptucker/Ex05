//
//  ex03.cpp
//  Ex05
//
//  Created by Ally McConnell on 6/13/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

//PT -- 16/20

#include <iostream>
using namespace std;
#include <string>
template <typename T>

class MyVector
{
public:
    MyVector();
    void push_back(T element);
    T pop_back();
    unsigned int size();
    bool empty();
    T at(int index);
    int clear();
    void swap(MyVector v2);
private:
//PT -- this needs to be a pointer, and dynamically allocated. What if I have more than 100 items to store?
    T elements[100];
    int vectorSize;
    
};

template MyVector::MyVector()
{
    vectorSize = 0;
}
template bool MyVector::empty()
{
    return (vectorSize == 0);
}
template T MyVector::at(int index)
{
    return elements[index];
}
//generic function definition
template void MyVector::push_back(T value)
{
    elements[vectorSize++] = value;
}
template T MyVector::pop_back()
{
    return elements[--vectorSize];
}
template
//function returns the number of elements in the vector
unsigned int MyVector::size()
{
    return vectorSize;
}
template int MyVector::clear()
{
    vectorSize = 0;
    return vectorSize;
}

template void MyVector::swap(MyVector v2)
{
    T temp[100];
    int tempSize = v2.size();
    for (int i = 0; i < v2.size(); i++)
    {
        temp[i] = v2.at9(i);
    }
    v2.clear();
    for (int i = 0; i < size(); i++)
    {
        v2.push_back(at(i));
    }
    clear();
    for (int i = 0; i <tempSize; i++)
    {
        push_back(temp[i]);
    }
}

int ex03()
{
    //create the object
    MyVector.v1;
    if(v1.empty())
        cout << "The vector is empty" <
        cout << "Add the elements to vector v1" <
        //call the push back
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(3);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << endl;
    }
    
    cout << "Size of the elements in vector v1: " <<
    cout << "Remove the last element from the vector v1" <
    v1.pop_back();
    cout << "Size of the elements in the vector v1 after being removed: "<
    
    //create the object
    MyVector v2;
    cout << "Add the elements to vector v2" <
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    //loop
    for (int i = 0; i < v2.size(), i++)
    {
        cout << v2.at(i) << endl;
    }
    cout << "Size of the elements in the vector v2: " <
    cout << "Swaps the contents between v1 and v2" <
    v1.swap(v2);
    cout << "Elements in vector v1 after swapped" <
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at() << endl;
    }
    cout << "Clear the elements in vector v1"<
    v1.clear();
    cout << "Size of the vector v1: " <
    system ("pause")
    return 0;
    

}
