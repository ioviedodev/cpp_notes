#ifndef LedBrightnessController_H
#define LedBrightnessController_H

#include <string>
#include <iostream>

using std::string;

class LedBrightnessController
{
private:
	int maxBrightness;
	int brightness;
public:
	explicit LedBrightnessController(int _maxBrightness) : maxBrightness(_maxBrightness) { brightness = 0; };
	void operator() (int _brightness);
	std::string str() const;
	operator std::string();
};

void LedBrightnessController::operator() (int _brightness)
{
	if (_brightness < 0)
		_brightness = 0;
	else if (_brightness > maxBrightness)
		_brightness = maxBrightness;
	brightness = _brightness;
}

string LedBrightnessController::str() const {
	string ledBrightnessController = string();
	ledBrightnessController = "brightness: " + std::to_string(brightness) + "/ maxBrightness:" + std::to_string(maxBrightness);
	return ledBrightnessController;
}

LedBrightnessController::operator std::string() {
	return str();
}

#endif