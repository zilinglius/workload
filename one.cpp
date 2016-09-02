#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <unistd.h>

#define MEMORY_SIZE 10000000;

int main() {

    std::cout<<"Here goes the short running workload..."<<std::endl;

    std::vector<int> datas;

    for(int nIndex = 0; nIndex < MEMORY_SIZE; nIndex ++) {
        datas.push_back(nIndex);
    }

    unsigned seed = std::chrono::sytem_clock::now().time_since_epoch().count();

    std::shuffle(datas.start(), datas.end(), std::default_random_engine(seed));

    std::cout<<"The application will sleep 5 seconds..."<<std::endl;

    sleep(5);

    std::cout<<"The application has exited..."<<std::endl;
}