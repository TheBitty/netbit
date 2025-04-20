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
    pcap_t* handle_;
    void process_packet(const u_char* packet);
    static void packet_handler(u_char* user, const struct pcap_pkthdr* pkthdr, const u_char* packet);

    };

#endif
