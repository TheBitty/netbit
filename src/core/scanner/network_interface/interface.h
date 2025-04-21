#indef interface_h
#define interface_h
#include <pcap.h>

#include <string>

class network_interface{ // this will be a parent class
  public:
    network_interface();
    ~network_interface();
    void list_interfaces(std::string interface);
    bool open_interface(std::string &interface);
    bool close_interface(std::string &interface);



  private:


    };

#endif
