#include <iostream>
#include <ctime>
int main() {
    // Get the current time in seconds since the epoch
    // std::time_t currentTime = std::time(nullptr);
    long long p = 0;
    clock_t start = clock();
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            for (size_t k = 0; k < 10; k++)
            {
                for (size_t l = 0; l < 10; l++)
                {
                    p += l;
                }
                
            }
            
        }
    }
    
    clock_t end = clock();
    double vector_f_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::time_t currentTime1 = std::time(nullptr);
    // Convert the time to a string representation
    std::cout << "Timestamp: " << vector_f_time  << std::endl;

    return 0;
}
