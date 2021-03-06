#include "ascii.hpp"

const unsigned char ascii_art[] = {
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x21, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2a, 0x2d, 0x2b, 0x2d, 0x2a, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x7e, 0x7e, 0x7e, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x56, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x2f, 0x7e, 0x5c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x20, 0x5e, 0x20, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x28, 0x20, 0x20, 0x20, 0x20, 0x20, 0x29, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x20, 0x76, 0x20, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x5c, 0x5f, 0x2f, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x56, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x2f, 0x20, 0x7e, 0x56, 0x7e, 0x20, 0x5c, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x5c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x60, 0x2e, 0x27, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x56, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x5c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x5f, 0x40, 0x5f, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x21, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x7e, 0x20, 0x7e, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x56, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4b, 0x20, 0x7c, 0x2f, 0x7c, 0x5c, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x2f, 0x6f, 0x2c, 0x6f, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x5f, 0x2d, 0x5f, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x7e, 0x2d, 0x5f, 0x2d, 0x7e, 0x2d, 0x5f, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x7e, 0x2d, 0x7e, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x6f, 0x60, 0x6f, 0x2f, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5c, 0x7c, 0x2f, 0x7c, 0x20, 0x58, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4b, 0x20, 0x7c, 0x2f, 0x7c, 0x5c, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x7c, 0x6f, 0x2e, 0x6f, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x5c, 0x76, 0x2f, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x58, 0x58, 0x58, 0x58, 0x58, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x2f, 0x5e, 0x5c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x6f, 0x27, 0x6f, 0x7c, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5c, 0x7c, 0x2f, 0x7c, 0x20, 0x58, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4b, 0x20, 0x7c, 0x2f, 0x7c, 0x5c, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x25, 0x2a, 0x2c, 0x2a, 0x25, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x5f, 0x6f, 0x5f, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x23, 0x3e, 0x2d, 0x3d, 0x2d, 0x3c, 0x23, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x7e, 0x6f, 0x7e, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x25, 0x2a, 0x27, 0x2a, 0x25, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5c, 0x7c, 0x2f, 0x7c, 0x20, 0x58, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4b, 0x20, 0x7c, 0x2f, 0x7c, 0x5c, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x5c, 0x2d, 0x20, 0x2d, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x21, 0x20, 0x7c, 0x2d, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x25, 0x20, 0x49, 0x20, 0x25, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x7c, 0x2d, 0x7c, 0x20, 0x21, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x2d, 0x20, 0x2d, 0x5c, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5c, 0x7c, 0x2f, 0x7c, 0x20, 0x58, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x51, 0x20, 0x7c, 0x7e, 0x7e, 0x7e, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x2f, 0x6f, 0x2c, 0x6f, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x5f, 0x2d, 0x5f, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x5f, 0x2d, 0x7e, 0x2b, 0x5f, 0x2d, 0x7e, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x7e, 0x2d, 0x7e, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x6f, 0x60, 0x6f, 0x2f, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x51, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x51, 0x20, 0x7c, 0x7e, 0x7e, 0x7e, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x7c, 0x6f, 0x2e, 0x6f, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x5c, 0x76, 0x2f, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x58, 0x58, 0x4f, 0x58, 0x58, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x2f, 0x5e, 0x5c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x6f, 0x27, 0x6f, 0x7c, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x51, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x51, 0x20, 0x7c, 0x7e, 0x7e, 0x7e, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x25, 0x2a, 0x2c, 0x2a, 0x25, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x5f, 0x6f, 0x5f, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x2d, 0x3d, 0x3c, 0x2a, 0x3e, 0x3d, 0x2d, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x7e, 0x6f, 0x7e, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x25, 0x2a, 0x27, 0x2a, 0x25, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x51, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x51, 0x20, 0x7c, 0x7e, 0x7e, 0x7e, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x5c, 0x2d, 0x20, 0x2d, 0x2f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x6f, 0x20, 0x7c, 0x2d, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x49, 0x20, 0x25, 0x20, 0x49, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x7c, 0x2d, 0x7c, 0x20, 0x6f, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2f, 0x2d, 0x20, 0x2d, 0x5c, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x51, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4a, 0x20, 0x2f, 0x7e, 0x7e, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x7c, 0x20, 0x6f, 0x60, 0x2c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7c, 0x20, 0x2d, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x3d, 0x7e, 0x29, 0x2b, 0x28, 0x5f, 0x3d, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x7c, 0x2d, 0x20, 0x7c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x60, 0x2e, 0x6f, 0x20, 0x7c, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7e, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x50, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4a, 0x20, 0x2f, 0x7e, 0x7e, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x28, 0x20, 0x6f, 0x5c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x21, 0x20, 0x5c, 0x6c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x5e, 0x5e, 0x5e, 0x58, 0x76, 0x76, 0x76, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x6c, 0x5c, 0x20, 0x49, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x5c, 0x6f, 0x20, 0x29, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7e, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x50, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4a, 0x20, 0x2f, 0x7e, 0x7e, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x25, 0x20, 0x2a, 0x60, 0x2e, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x25, 0x20, 0x3c, 0x7e, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x25, 0x25, 0x20, 0x2f, 0x20, 0x25, 0x25, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x5f, 0x3e, 0x20, 0x25, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x60, 0x2c, 0x2a, 0x20, 0x25, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7e, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x50, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x4a, 0x20, 0x2f, 0x7e, 0x7e, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x21, 0x20, 0x2d, 0x5c, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x5c, 0x20, 0x2d, 0x21, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x27, 0x2c, 0x5c, 0x27, 0x2c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x49, 0x2d, 0x20, 0x5c, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x5c, 0x2d, 0x20, 0x49, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x7e, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x50, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x31, 0x30, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x30, 0x6c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x31, 0x30, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x30, 0x6c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x31, 0x30, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x30, 0x6c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x31, 0x30, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x30, 0x6c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x39, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x36, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x39, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x36, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x39, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x36, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x39, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x36, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x38, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x38, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x38, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x38, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x38, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x38, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x38, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x38, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x37, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x37, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x37, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x37, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4c, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x36, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x39, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x36, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x39, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x36, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x39, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x36, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x39, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x35, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x35, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x35, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x35, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x34, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x62, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x34, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x62, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x34, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x62, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x34, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x62, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x33, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x45, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x33, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x45, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x33, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x45, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x33, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x45, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5a, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5a, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x23, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x23, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x23, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5a, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a,
  0x7c, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x7c, 0x0a,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5a, 0x7c, 0x0a,
  0x20, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x7e, 0x20, 0x0a
};

const unsigned int ascii_art_len = 5616;
