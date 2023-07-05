#include "pch.h"
#include "../BaseBall/baseball.cpp"

#include <string>
using namespace std;

TEST(BaseballGame, ThrowExceptionWhenInputLengthIsUnmached) {
	BaseballGame game;
  EXPECT_THROW(game.guess(string("12")), length_error);
}

TEST(BaseballGame, ThrowExceptionWhenInvalidChar) {
	BaseballGame game;
	EXPECT_THROW(game.guess(string("12s")), invalid_argument);
}