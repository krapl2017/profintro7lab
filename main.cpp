#include <iostream>
#include "Weather.h"

#include "XmlService.h"

int main() {
	
	
	XmlService xs;
	Weather w0 = xs.getWeather("weather.xml");

	return 0;
}