#ifndef _THRIFT_TRANSPORT_TSERVERSOCKET_H_
#define _THRIFT_TRANSPORT_TSERVERSOCKET_H_ 1

#include "TServerTransport.h"
#include <boost/shared_ptr.hpp>

namespace facebook { namespace thrift { namespace transport { 

class TSocket;

/**
 * Server socket implementation of TServerTransport. Wrapper around a unix
 * socket listen and accept calls.
 *
 * @author Mark Slee <mcslee@facebook.com>
 */
class TServerSocket : public TServerTransport {
 public:
  TServerSocket(int port);
  TServerSocket(int port, int sendTimeout, int recvTimeout);

  ~TServerSocket();

  void setSendTimeout(int sendTimeout);
  void setRecvTimeout(int recvTimeout);

  void listen();
  void close();

 protected:
  shared_ptr<TTransport> acceptImpl();

 private:
  int port_;
  int serverSocket_;
  int acceptBacklog_;
  int sendTimeout_;
  int recvTimeout_;
};

}}} // facebook::thrift::transport

#endif // #ifndef _THRIFT_TRANSPORT_TSERVERSOCKET_H_
