#include <coordinate>
#include <iostream>
#include <typeinfo>

int main()
{
  std::int3 no_args;

  std::cout << "no_args: " << no_args[0] << ", " << no_args[1] << ", " << no_args[2] << std::endl;

  std::int3 x(1,2,3);

  std::int3 copy_of_x = x;

  std::cout << "copy_of_x: " << copy_of_x[0] << ", " << copy_of_x[1] << ", " << copy_of_x[2] << std::endl;
  
  std::float3 y(4.1,5.1,6.1);

  std::cout << "x[1]: " << x[1] << std::endl;

  std::cout << "y[2]: " << y[2] << std::endl;

  auto sum = x + y;

  std::cout << "type of sum: " << typeid(sum).name() << std::endl;

  std::cout << "sum: " << sum[0] << ", " << sum[1] << ", " << sum[2] << std::endl;

  auto product = x * y;

  std::cout << "type of product: " << typeid(product).name() << std::endl;

  std::cout << "product: " << product[0] << ", " << product[1] << ", " << product[2] << std::endl;

  std::float3 one(1);

  std::cout << "one[2]: " << one[2] << std::endl;

  return 0;
}

