#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {

    int n;                                  //number of Arrays
    int q;                                  //number of Queries
    int tempValue;                          //would be used to store the input value of each element in inner vector


    std::cin >> n >> q;


    /*creation of vectors*/


    //creating 'n' number of vector<int>
    std::vector<std::vector<int>> a(n);


    int numberOfElements;
    //for each vector
    for(int i = 0; i < n; i++){
        //store the number of elements desired
        std::cin >> numberOfElements;
        //runs 'numberOfElements times
        for(int j = 0; j < numberOfElements; j++){
            std::cin >> tempValue;
            a[i].push_back(tempValue);
        }
    }


    /*queries of vectors*/


    int outVector;                          //stores the queried outer vector index
    int inVector;                           //stores the queried inner vector index
    //runs 'q' times
    for(int i = 0; i < q; i++){
        std::cin >> outVector >> inVector;
        std::cout << a[outVector][inVector];
        std::cout << std::endl;
    }

    return 0;
}
