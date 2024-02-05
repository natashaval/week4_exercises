#pragma once
#include <vector>

template<typename T>
class CustomMatrix {
    public:
    CustomMatrix(std::vector<std::vector<T>> customMatrix) {
        matrix = customMatrix;
    }

    private:
    std::vector<std::vector<T>> matrix;
};