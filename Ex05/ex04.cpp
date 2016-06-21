//
//  ex04.cpp
//  Ex05
//
//  Created by Ally McConnell on 6/13/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream> 
using namespace std;
#include <string>
//PT -- 12/20

template <typename T>

void shuffle(vector<T>&v);

int ex04()
{
    //declare variables
    int i, a;
    vector <int> v;
    cout << "Enter 10 integers: " << endl;
    //for loop to store integers
    for (i = 0; i <10; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    //shuffle integers
    shuffle(v);
    cout << "\nShuffled integers are: " << endl << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        system ("pause");
        return 0;
    }
    
    //PT -- Declare this function outside of main
    template <typename T>
    void shuffle(vector<T>&v){
        srand(time(0));
        for (int i = 0; i <v.size(); i++)
        {
            int index = rand()%v.size();
            T temp = v[index];
            v[index] = v[i];
            v[i] = temp;
            
        }
    }
}
