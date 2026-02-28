// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime0) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime1) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime2) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime9) {
  EXPECT_FALSE(checkPrime(9));
}

TEST(st1, checkPrime97) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, nPrime1) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(st1, nPrime2) {
  EXPECT_EQ(3u, nPrime(2));
}

TEST(st1, nPrime5) {
  EXPECT_EQ(11u, nPrime(5));
}

TEST(st1, nextPrime4) {
  EXPECT_EQ(5u, nextPrime(4));
}

TEST(st1, nextPrime11) {
  EXPECT_EQ(13u, nextPrime(11));
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(2u, nextPrime(1));
}

TEST(st1, sumPrime20) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrimeBound2) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}
