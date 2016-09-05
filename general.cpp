#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <unistd.h>

int main(int argc, char* args[]) {

    std::cout<<"Here goes the short running workload..."<<std::endl;

    std::vector<int> datas;

    for(int nIndex = 0; nIndex < atoi(args[1]); nIndex ++) {
        datas.push_back(nIndex);
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(datas.begin(), datas.end(), std::default_random_engine(seed));

    std::cout<<"The application will sleep 5 seconds..."<<std::endl;

    sleep(5);

    std::cout<<"The application has exited..."<<std::endl;
}