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
	};
};
