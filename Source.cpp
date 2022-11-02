
#include "toml.hpp"

#include <iostream>

using namespace std;

int main(void)
{
	toml::value vx{
		{"name","xyz"}, {"age",32}
	};

	toml::value data{
		{"node", {vx, vx }}
	};

	auto strx = toml::format(data);

	toml::value d3{
		{"service", {data}}
	};

	auto stry = toml::format(d3);

	return 0;
}
