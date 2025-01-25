#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(5);
  int index = 10; // Index is out of bounds
  
  // Check for out-of-bounds access before attempting to access elements
  if(index >= 0 && index < vec.size()){
    bool value = vec.at(index);
    std::cout << "Value at index " << index <<": " << value << std::endl; 
  } else {
      std::cerr << "Error: Index out of bounds!\n";
  }

  return 0;
} 