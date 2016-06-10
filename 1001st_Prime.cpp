//
//  main.cpp
//  10001st Prime #7
//
//  Created by Joe Coppin on 12/25/15.
//  Copyright © 2015 Joe Coppin. All rights reserved.
//

#include <iostream>

int main() {
    
    
    
    for(int i=3; i<=100; i++)
    {
        for(int j=2; j<i; j++)
        {
            if((i%j)==0)
                std::cout<<i<<std::endl;
        }
    }
}
