#include "easy_list.h"

void itc_rev_list(std::vector<int> &mass){
    if(mass.size() == 0){
        return;
    }
    for(int i=0; i<mass.size()+1; i++){
        mass.push_back(*(mass.end()-i));
        mass.erase(mass.end()-i-1);
    }
}

void itc_rev_par_list(std::vector<int> &mass){
    if(mass.size() == 0){
        return;
    }
    for(int i=1; i<mass.size(); i+=2){
        int t = mass[i];
        mass[i] = mass[i-1];
        mass[i-1] = t;
    }
}

void itc_rshift_list(std::vector<int> &mass){
    if(mass.size() == 0){
        return;
    }
    int end = mass.back();
    for(int i=mass.size()-1; i>=0; i--){
        mass[i] = mass[i-1];
    }
    mass[0] = end;
}

void itc_super_shift_list(std::vector<int> &mass, int n){
    if(mass.size() == 0){
        return;
    }
    int size = mass.size();
    int first = mass[0];
    for(int i=0; i<size; i++){
        int j = i - n;
        j = (j > size ? j-size : j);
        j = (j < 0 ? j+size : j);
        mass.push_back(mass[j]);
    }
    mass.erase(mass.begin(),mass.end()-size);
    if(n < 0){
        mass[size+n] = first;
    }
}