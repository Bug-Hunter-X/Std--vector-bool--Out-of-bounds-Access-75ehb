# std::vector<bool> Out-of-bounds Access Bug Report

This repository demonstrates a common error related to out-of-bounds access in `std::vector<bool>` in C++.  `std::vector<bool>` is a specialized container that does not store booleans as individual bits.  This optimization can lead to unexpected behavior, especially when accessing elements beyond the vector's valid range.

The `bug.cpp` file contains code that attempts to access an element outside the bounds of the vector. This can manifest in various ways, from silent data corruption to crashes.  `bugSolution.cpp` provides a correction, highlighting safer ways to handle vector access.