#include <iostream>
#include <vector>
std::vector<int> addVectors(const std::vector<int> &vector1, const std::vector<int> &vector2)
{
    if (vector1.size() != vector2.size())
    {
        std::cerr << "Error: Vectors must have the same size for addition." << std::endl;
        exit(1);
    }
    std::vector<int> result;
    result.reserve(vector1.size());
    for (size_t i = 0; i < vector1.size(); i++)
        result.push_back(vector1[i] + vector2[i]);
    return result;
}
int main()
{
    std::vector<int> vector1 = {1, 2, 3, 4, 5};
    std::vector<int> vector2 = {6, 7, 8, 9, 10};
    std::vector<int> sum = addVectors(vector1, vector2);
    std::cout << "Resultant Vector: ";
    for (int element : sum)
        std::cout << element << " ";
    std::cout << std::endl;
    return 0;
}