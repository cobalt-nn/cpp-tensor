#include "iostream"
#include "Tensor.h"

int main(){
  std::vector<double> data(100);

  for(size_t i = 0;i < 100;i++){
    data.at(i) = i;
  }

  std::vector<size_t> shape = {5,5,2,2};

  Tensor t(shape,data);

  std::cout << t.to_string() << std::endl;

  return 0;
}