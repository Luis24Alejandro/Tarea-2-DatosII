#ifndef TIME_H
#define TIME_H

#include "Sorting Algorithms/Headers/SelectionSort.h"
#include "Sorting Algorithms/Headers/MergeSort.h"
#include "Sorting Algorithms/Headers/BubbleSort.h"

#include <chrono>
#include <vector>
#include <stdexcept>



template <typename Func, typename... Args>
long long getSystemTimeNano(Func func, Args&&... args);

#endif //TIME_H



