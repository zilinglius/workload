#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    cout<<"Here goes the short running workload..."<<endl;
    cout<<"The application will sleep 5 seconds..."<<endl;

    sleep(5);

    cout<<"The application has waken up..."<<endl;
}