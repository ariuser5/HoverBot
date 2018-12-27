#ifndef AnalogFilter_h
#define AnalogFilter_h

#include "Arduino.h"

class AnalogFilter_h
{
	public:
		AnalogFilter(int pin); //Constructor
		void Initialize();
		void ReadNext();
		void ClearReadings();
		
		void SetPin();
		void SetReadingCapacity(int);
		void SetNoiseThreshold(int);
		void SetBoundaries(long, long);
		
		int GetPin();
		int GetNoiseThreshold();
		int GetReadingCapacity();
		int[] GetBoundaries();
	
	private:
		int _pin;
		int _readingCapacity;
		int _noiseThreshold;
		long _maxInputValue;
		long _minInputValue;
		long _inputValue;
}

#endif