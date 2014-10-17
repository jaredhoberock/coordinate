#include <coordinate>
#include <typeinfo>

int main()
{
  std::int1 fill_with_ones1(1);
  std::cout << "fill_with_ones1: " << fill_with_ones1 << std::endl;

  std::int3 fill_with_ones3(1);
  std::cout << "fill_with_ones3: " << fill_with_ones3 << std::endl;

  std::int3 no_args;
  std::cout << "no_args: " << no_args << std::endl;

  std::int3 x(1,2,3);
  std::int3 copy_of_x = x;
  std::cout << "copy_of_x: " << copy_of_x << std::endl;

  std::float3 y(4.1,5.1,6.1);
  std::cout << "y: " << y << std::endl;

  auto sum = x + y;
  std::cout << "type of sum: " << typeid(sum).name() << std::endl;
  std::cout << "sum: " << sum << std::endl;

  auto product = x * y;
  std::cout << "type of product: " << typeid(product).name() << std::endl;
  std::cout << "product: " << product << std::endl;

  std::float3 one(1);
  std::cout << "one: " << one << std::endl;

  auto multiply_by_scalar = 5 * x;
  std::cout << "multiply_by_scalar: " << multiply_by_scalar << std::endl;

  std::float4 four_float_ones{1,1,1,1};
  std::int3 three_int_zeros{0,0,0};
  std::cout << "zeros are less than ones: " << (three_int_zeros < four_float_ones) << std::endl;

  return 0;
}

