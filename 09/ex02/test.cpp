#include <iostream>
#include <vector>

void mergeAndSort(std::vector<int>& Large, const std::vector<int>& Small) {
    std::vector<int>::iterator large_it = Large.begin();
    std::vector<int>::const_iterator small_it = Small.begin();

    while (small_it != Small.end()) {
        // Find the position to insert the current element from Small into Large
        while (large_it != Large.end() && *large_it < *small_it) {
            ++large_it;
        }

        // Insert the element from Small into Large
        Large.insert(large_it, *small_it);
        // Increment iterators after the insertion
        ++small_it;
        ++large_it;
    }
}

int main() {
    // Your vectors
    std::vector<int> Small;
    Small.push_back(3);
    Small.push_back(7);
    Small.push_back(2);

    std::vector<int> Large;
    Large.push_back(4);
    Large.push_back(5);
    Large.push_back(9);

    // Merge and sort the vectors
    mergeAndSort(Large, Small);

    // Display the result
    std::cout << "Merged and sorted vector: ";
    for (size_t i = 0; i < Large.size(); ++i) {
        std::cout << Large[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
