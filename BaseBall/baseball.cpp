#include <string>
#include <stdexcept>
using namespace std;

class BaseballGame
{
public:
	void guess(string string)
	{
		if (string.length() != 3) {
			throw length_error("Must be three letters.");
		}
		for (auto ch : string)
		{
			if (ch < '0' || ch > '9')
			{
				throw invalid_argument("Must be number");
			}
		}
	};
};
