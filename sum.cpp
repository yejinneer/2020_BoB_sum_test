#include "sum.h"
int sum(int n){  
    int sum = 0;  
    for(int count = 1; count <= n; count++) {    
        sum += count;  
    }  
    return sum; 
}