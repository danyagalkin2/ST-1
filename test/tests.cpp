// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(primes, isPrime_zero) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(primes, isPrime_one) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(primes, isPrime_smallest) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(primes, isPrime_four) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(primes, isPrime_large_prime) {
  EXPECT_TRUE(checkPrime(1009));
}

TEST(primes, isPrime_large_composite) {
  EXPECT_FALSE(checkPrime(1000));
}

TEST(primes, nth_prime_third) {
  EXPECT_EQ(5u, nPrime(3));
}

TEST(primes, nth_prime_tenth) {
  EXPECT_EQ(29u, nPrime(10));
}

TEST(primes, next_after_two) {
  EXPECT_EQ(3u, nextPrime(2));
}

TEST(primes, next_after_seven) {
  EXPECT_EQ(11u, nextPrime(7));
}

TEST(primes, next_after_hundred) {
  EXPECT_EQ(101u, nextPrime(100));
}

TEST(primes, sum_to_30) {
  EXPECT_EQ(129u, sumPrime(30));
}

TEST(primes, sum_to_100) {
  EXPECT_EQ(1060u, sumPrime(100));
}

TEST(primes, sum_below_3) {
  EXPECT_EQ(2u, sumPrime(3));
}
