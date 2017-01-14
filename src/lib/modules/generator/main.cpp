/*
 * main.cpp
 *
 *  Created on: Nov 10, 2016
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>
#include "config.h"
#include "utils.h"
#include "generator.h"

using namespace std;

int main(int argc, char* argv[]) {
    for(int i = 0; i < argc; i++) {
        srand (time(NULL));//need a much better random number generator
        string race, gender;
        
        if(argv[++i]){
            gender = argv[i];
            if(argv[++i]){
                race = argv[i];
                nameGenerator(gender,race);
            }
        }else{
            return -1;
        }
    }
	return 0;
}