#include <coordinate>
#include <iostream>
#include <typeinfo>

int main()
{
  std::int3 x(1,2,3);
  
  std::float3 y(4.1,5.1,6.1);

  std::cout << "x[1]: " << x[1] << std::endl;

  std::cout << "y[2]: " << y[2] << std::endl;

  auto product = x * y;

  std::cout << "type of product: " << typeid(product).name() << std::endl;

  std::cout << "product: " << product[0] << ", " << product[1] << ", " << product[2] << std::endl;

  auto sum = x + y;

  std::cout << "type of sum: " << typeid(sum).name() << std::endl;

  std::cout << "sum: " << sum[0] << ", " << sum[1] << ", " << sum[2] << std::endl;

  std::float3 one(1);

  std::cout << "one[2]: " << one[2] << std::endl;

  return 0;
}

