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

TEST(primes, isPrime_three) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(primes, isPrime_four) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(primes, isPrime_twentyfive) {
  EXPECT_FALSE(checkPrime(25));
}

TEST(primes, isPrime_large_prime) {
  EXPECT_TRUE(checkPrime(1009));
}

TEST(primes, isPrime_large_composite) {
  EXPECT_FALSE(checkPrime(1000));
}

TEST(primes, isPrime_thousandth) {
  EXPECT_TRUE(checkPrime(7919));
}

TEST(primes, isPrime_89squared) {
  EXPECT_FALSE(checkPrime(7921));
}

TEST(primes, nth_prime_first) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(primes, nth_prime_third) {
  EXPECT_EQ(5u, nPrime(3));
}

TEST(primes, nth_prime_sixth) {
  EXPECT_EQ(13u, nPrime(6));
}

TEST(primes, nth_prime_tenth) {
  EXPECT_EQ(29u, nPrime(10));
}

TEST(primes, nth_prime_25th) {
  EXPECT_EQ(97u, nPrime(25));
}

TEST(primes, next_after_two) {
  EXPECT_EQ(3u, nextPrime(2));
}

TEST(primes, next_after_three) {
  EXPECT_EQ(5u, nextPrime(3));
}

TEST(primes, next_after_seven) {
  EXPECT_EQ(11u, nextPrime(7));
}

TEST(primes, next_after_13) {
  EXPECT_EQ(17u, nextPrime(13));
}

TEST(primes, next_after_97) {
  EXPECT_EQ(101u, nextPrime(97));
}

TEST(primes, next_after_hundred) {
  EXPECT_EQ(101u, nextPrime(100));
}

TEST(primes, sum_below_2) {
  EXPECT_EQ(0u, sumPrime(1));
}

TEST(primes, sum_below_3) {
  EXPECT_EQ(2u, sumPrime(3));
}

TEST(primes, sum_to_5) {
  EXPECT_EQ(5u, sumPrime(5));
}

TEST(primes, sum_to_12) {
  EXPECT_EQ(28u, sumPrime(12));
}

TEST(primes, sum_to_30) {
  EXPECT_EQ(129u, sumPrime(30));
}

TEST(primes, sum_to_50) {
  EXPECT_EQ(328u, sumPrime(50));
}

TEST(primes, sum_to_100) {
  EXPECT_EQ(1060u, sumPrime(100));
}
