#pragma once
#include <iostream>
#include <string>

class Weather
{
private:
	std::string city; //  �����
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // �����
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(std::string city = "Kirov", double lon = 49.6601, double lat = 58.5966, double temperature = 5.69, std::string weather = "rain", double windSpeed = 4.27, int clouds = 100);


	~Weather();
};

