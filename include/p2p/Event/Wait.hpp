#ifndef P2P_EVENT_WAIT_HPP
#define P2P_EVENT_WAIT_HPP

#include <vector>

#include <p2p/Event/Source.hpp>

namespace p2p {

	namespace Event {
	
		void Wait(const std::vector<Source>& sources);
		
	}
	
}

#endif
