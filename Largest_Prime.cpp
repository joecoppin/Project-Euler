
/*
  main.cpp
 
Largest prime factor

Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

  Created by Joe Coppin on 12/24/15.
  Copyright © 2015 Joe Coppin. All rights reserved.

*/
#include <iostream>

unsigned long int findPrime(unsigned long);

int main() {
    
    unsigned long bigNum = 600851475143;
    unsigned long primeNum = 0;
    
    for(int i=1; i<bigNum; i++)
    {
    primeNum = findPrime(bigNum);
    bigNum= bigNum/primeNum;
        std::cout<<primeNum<<std::endl;;
    }
    
    std::cout<< "The biggest prime number is: "  << primeNum <<std::endl;
    
}

unsigned long int findPrime(unsigned long x)
{
    for (int i=2; i<x; i++)
    {
        if (x%i==0)
            return i;
    }
    return x;
}