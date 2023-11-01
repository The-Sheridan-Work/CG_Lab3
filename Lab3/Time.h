#pragma once
#ifndef _TIME_H_
#define _TIME_H_

#include <chrono>

class Time
{
private:

	int frameCount;
	std::chrono::duration<float> deltaTime;
	std::chrono::duration<float> totalTime;
	std::chrono::time_point<std::chrono::system_clock> beginTime;
	std::chrono::time_point<std::chrono::system_clock> endTime;

	static Time* instance;

	inline Time() = default;
	inline ~Time() = default;
	inline explicit Time(Time const&) = delete;
	inline Time& operator=(Time const&) = delete;

public:

	inline static Time& Instance()
	{
		if (instance == nullptr)
		{
			instance = new Time();
		}
		return *instance;
	}

	inline void Destroy()
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

	void Initialize();

	void Update();

	int FrameCount() const { return frameCount; }

	std::chrono::duration<float> DeltaTime() const { return deltaTime; }
	
	std::chrono::duration<float> TotalTime() const { return totalTime; }
};


#endif // !_TIME_H_