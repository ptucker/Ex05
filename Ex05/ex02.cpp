//
//  ex02.cpp
//  Ex05
//
//  Created by Ally McConnell on 6/13/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>
template <typename T>

bool isSorted(const T list[], int size)
{
    for (int i = 0;i < size -1; i++)
        if (list[i] > list[i+1])
            return false;
    return true;
}

//declaring variable and array
int n, datatype, list1[10];
//declare array of double type
double list[10];
//declare array of string type
string list3[10];

int ex02()
{
    //Ask user for type of input
    cout << "Select the type of array" << endl << "1.int\n 2.double\n 3.string\n";
    cin >> datatype;
    //find out if 1 was entered
    if (datatype == 1)
    {
        cout << "\nEnter total number of digits: " << endl;
        cin >> n;
        cout << "Enter digits" << endl;
        //use for loop to store values
        for (int i = 0; i < n; i++)
        {
            cin >> list[i];
        }
        //call sort function
        cout << "The array is " << (isSorted(list, n)? "sorted": "not sorted") << endl;
        
    }
    system ("pause");
    return 0;
}


