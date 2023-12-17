#include <iostream>
#include <vector>
#include <algorithm>
// Function to find the first occurrence of an integer in a vector
std::vector<int>::iterator findFirstOccurrence(std::vector<int>& container, int value) {
    return std::find(container.begin(), container.end(), value);
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int valueToFind = 30;

    auto it = findFirstOccurrence(numbers, valueToFind);

    if (it != numbers.end()) {
        std::cout << "Found at position: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Not found." << std::endl;
    }

    return 0;
}
