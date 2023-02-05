#include "easy_list.h"

void itc_even_index_list(const std::vector<int> &mass, std::vector<int> &mass2){
    for(int i=0; i<mass.size(); i+=2){
        mass2.push_back(mass[i]);
    }
}

void itc_even_parts_list(const std::vector<int> &mass, std::vector<int> &mass2){
    for(int i=0; i<mass.size(); i++){
        if(mass[i] % 2 == 0){
            mass2.push_back(mass[i]);
        }
    }
}

int itc_positive_list(const std::vector<int> &mass){
    int c=0;
    for(int i=0; i<mass.size(); i++){
        if(mass[i] >= 0){
            c++;
        }
    }
    return c;
}

int itc_sl_list(const std::vector<int> &mass){
    int c=0;
    for(int i=1; i<mass.size(); i++){
        if(mass[i] > mass[i-1]){
            c++;
        }
    }
    return c;
}

bool itc_same_parts_list(const std::vector<int> &mass){
    for(int i=1; i<mass.size(); i++){
        if(mass[i] < 0 && mass[i-1] < 0){
            return true;
        }
        if(mass[i] >= 0 && mass[i-1] >= 0){
            return true;
        }
    }
    return false;
}
