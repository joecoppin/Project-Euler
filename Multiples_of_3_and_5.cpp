//
//  main.cpp
//  Multiples of 3 and 5
//
//  Created by Joe Coppin on 12/24/15.
//  Copyright © 2015 Joe Coppin. All rights reserved.
//

#include <iostream>

int main() {
    
    int sumBoth=0;
    for (int i=1; i<1000; i++)
    {
        if (((i%3)&&(i%5))==0)
            sumBoth +=i;
    }
    std::cout<<"The answer is: "<<sumBoth<<std::endl;
    
}
