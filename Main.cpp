#include "iostream"
#include "Tensor.h"

int main(){
  std::vector<double> data(100);

  for(size_t i = 0;i < 100;i++){
    data.at(i) = i;
  }

  std::vector<size_t> shape = {10,2,5};

  Tensor t(shape,data);

  std::cout << t.hadamard(t).to_string() << std::endl;

  return 0;
}