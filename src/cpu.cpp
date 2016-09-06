#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <unistd.h>

int main(int argc, char* args[]) {

    std::cout<<"Here goes the short running cpu-bound workload..."<<std::endl;

    std::vector<double> datas;

    for(int nIndex = 0; nIndex < atoi(args[1]); nIndex ++) {
        datas.push_back(nIndex);
    }

    int nCount = atoi(args[2]);
    while(nCount > 0) {

        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

        std::shuffle(datas.begin(), datas.end(), std::default_random_engine(seed));

        usleep(1);

        nCount--;
    }
    std::cout<<"workload has exited..."<<std::endl;
}