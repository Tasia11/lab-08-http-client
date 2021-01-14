#include <header.hpp>

int main(int argc, [[maybe_unused]] char **argv) {
  Client A(argc, argv);
  return A.clientRequest();
}
