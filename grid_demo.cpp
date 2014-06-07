#include <coordinate>
#include <cassert>
#include <algorithm>
#include <iostream>
#include <iterator>

template<class Iterator>
std::reverse_iterator<Iterator> make_reverse_iterator(Iterator i)
{
  return std::reverse_iterator<Iterator>(i);
}

int main()
{
  std::regular_grid<int> g1(10);

  std::cout << "g1.min(): " << g1.min() << std::endl;
  std::cout << "g1.max(): " << g1.max() << std::endl;

  std::cout << "g1.contains(9): " << g1.contains(9) << std::endl;
  assert(g1.contains(9));

  std::cout << "g1.contains(10): " << g1.contains(10) << std::endl;
  assert(!g1.contains(10));

  std::regular_grid<std::int2> g2({2,2}, {10,10});

  std::cout << "g2.min(): " << g2.min() << std::endl;
  std::cout << "g2.max(): " << g2.max() << std::endl;

  std::cout << "g2[{0,0}]: " << g2[{0,0}] << std::endl;
  std::cout << "g2[{1,1}]: " << g2[{1,1}] << std::endl;

  g2.reshape(20,20);

  std::cout << "g2.min(): " << g2.min() << std::endl;
  std::cout << "g2.max(): " << g2.max() << std::endl;

  std::cout << "g2.extent(): " << g2.extent() << std::endl;

  std::cout << "g2.contains({10,10}): " << g2.contains({10,10}) << std::endl;
  assert(g2.contains({10,10}));

  std::regular_grid<std::int3> g3(std::int3(1), std::int3(3));

  std::copy(g3.begin(), g3.end(), std::ostream_iterator<std::int3>(std::cout, " "));
  std::cout << std::endl;

  std::copy(make_reverse_iterator(g3.end()), make_reverse_iterator(g3.begin()), std::ostream_iterator<std::int3>(std::cout, " "));
  std::cout << std::endl;

  std::copy(g1.begin(), g1.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  std::cout << "g1[0]: " << g1[0] << std::endl;
  std::cout << "g2[0]: " << g2[0] << std::endl;
  std::cout << "g3[0]: " << g3[0] << std::endl;

  return 0;
}

