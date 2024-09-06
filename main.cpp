#include <iostream>

int main() {
    int n = 0;
    int indexes[2];
    bool foundIdexes = false;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    int num = 0;

    std::cout << "Enter the array: \n";
    for(auto& i: arr){
        std::cin >> i;
    }

    std::cout << "Enter the sum of the 2 numbers: ";
    std::cin>>num;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == num) {
                foundIdexes = true;
                indexes[0] = i;
                indexes[1] = j;
            }
        }
    }
    if(foundIdexes)
        std::cout << '[' << indexes[0] << ", " << indexes[1] << ']';
    else
        std::cout << "Could not find 2 numbers that add up to: " << num;

    return 0;
}
