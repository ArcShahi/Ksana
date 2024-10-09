#ifndef KSANA_HPP
#define KSANA_HPP

#include <chrono>

namespace xe
{


	class Ksana
	{
	public:
		Ksana()
			:init{ std::chrono::high_resolution_clock::now() }
		{
		}

		double elapsed() const
		{
			// returns time in millisecond (ms)
			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double, std::milli> t = end - init;
			return t.count();
		}

		void reset()
		{
			init = std::chrono::high_resolution_clock::now();
		}

	private:
		std::chrono::time_point < std::chrono::high_resolution_clock> init;

	};

}
#endif // !KSANA_HPP
