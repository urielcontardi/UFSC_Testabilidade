#include "identification.h"
#include "gtest/gtest.h"

const int MIN_LENGTH = 2;
const int MAX_LENGTH = 10;

namespace {

TEST(IDENTIFICADOR, Teste1) {
    EXPECT_TRUE(verifyId("aa", MIN_LENGTH, MAX_LENGTH));
}

TEST(IDENTIFICADOR, Teste2) {
    EXPECT_FALSE(verifyId("aaaaaaaaaaaaaa", MIN_LENGTH, MAX_LENGTH));
}

TEST(IDENTIFICADOR, Teste3) {
    EXPECT_FALSE(verifyId("!", MIN_LENGTH, MAX_LENGTH));
}

}