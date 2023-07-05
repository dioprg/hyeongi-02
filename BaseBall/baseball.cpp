#include <string>
#include <stdexcept>
using namespace std;

class BaseballGame
{
public:
	void guess(string string)
	{
		throw length_error("Must be three letters.");
	};
};
