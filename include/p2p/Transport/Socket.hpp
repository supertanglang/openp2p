#ifndef P2P_SOCKET_HPP
#define P2P_SOCKET_HPP

#include <p2p/Event/Source.hpp>

namespace p2p {
	
	template <typename EndpointType, typename MessageType>
	class Socket {
		public:
			virtual bool isValid() const = 0;
			
			virtual Event::Source eventSource() const = 0;
			
			virtual bool send(const EndpointType& endpoint, const MessageType& message) = 0;
			
			virtual bool receive(EndpointType& endpoint, MessageType& message) = 0;
			
	};
	
}

#endif
