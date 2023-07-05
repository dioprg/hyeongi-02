#include "pch.h"
#include "../BaseBall/baseball.cpp"

#include <string>
using namespace std;

class BaseballFixture : public testing::Test
{
public:
	BaseballGame game;
	void assertIllegalArgument(string guessNumber)
	{
		try
		{
			game.guess(guessNumber);
			FAIL();
		} catch (exception e)
		{
		}
	}
};

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}