//
//  ex01.cpp
//  Ex05
//
//  Created by Ally McConnell on 6/13/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

//PT -- As before, you have the right ideas, but the code won't compile as it is.
// 12/20

#include <iostream>
using namespace std;
#include <string>

//create a template
template

//definition of function template
void Lsearch(T*a T item, int size)
{
    z = 0;
    for (int i = 0;i
         {
             if (a[i] == item)
             {
                 z = 1;
                 cout << "\nItem found at position" = <<;
             }
             else if(z!=)
             {
                 z = 0;
             }

         }
         if (z == 0)
         {
             cout << "\nItem not found in the list\n\n" <<;
         }
}

void main()
{
    int integerarray[10] = {2, 42, 56, 86, 87, 99, 323, 546, 767, 886};
    double doublearray[10] = {2.4, 5.53, 44.4, 54.45, 65.7, 89.54, 3.23, 6.5, 8.77, 6.33};
    string stringarray[10] = {"abc", "bca", "cba", "pac", "res", "acb", "zsd", "dre", "mer", "sha"};
    
    //declare variable
    int search;
    double search1;
    string search2;
    
    cout << "\nElements of the Integer Array\n";
    for (int i = 0; i < 10; i++)
    {
        cout << " " <<
    }
    
    cout << "Enter an item to be search: ";
    cin >> search;
    
    cout << "\n\nLinear Seach Method\n";
    Lsearch(integerarray, search, 10);
    cout << "\nElements of double array\n";
    for (int i = 0; i <10; i++)
    {
        cout << " " <<
    }
    
    cout << "\n\nEnter an item to be searched: ";
    cin >> search1;
    cout << "\n\nLinear search method\n";
    Lsearch(doublearray, search1, 10);
    
    cout << "\nElements of string array\n";
    for (int i = 0; i < 10; i++)
    {
        cout << " " << stringarray[i] << ",";
    
    }
    cout << "\n\nEnter an item to be searched: ":
    cin >> search2;
    cout << "\n\nLinear search method\n";
    Lsearch(stringarray, search2, 10);
    //Pause System
    system ("pause");
        
}
         
         


