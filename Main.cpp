#include "iostream"
#include "Tensor.h"

int main(){
  std::vector<double> data(100);

  for(size_t i = 0;i < 100;i++){
    data.at(i) = i;
  }

  std::vector<size_t> shape = {5,5,2,2};

  Tensor t(shape,data);

  for(size_t i = 0;i < 5;i++){
    for(size_t j = 0;j < 5;j++){
      for(size_t k = 0;k < 2;k++){
        for(size_t l = 0;l < 2;l++){
          std::cout << t.at({i,j,k,l}) << ",";
        }
        std::cout << std::endl;
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  return 0;
}