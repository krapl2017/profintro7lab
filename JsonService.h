#pragma once
#include <fstream>
#include "Service.h"
#include "../WeatherService/dependencies/include/nlohmann/json.hpp"

class JsonService : public Service {
public:
	Weather getWeather(std::string s) override;

	~JsonService() override;
};

