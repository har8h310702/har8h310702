#include <iostream>
#include <string>
using namespace std;
class Node
{
protected:
    string name;

public:
    Node(string str)
    {
        name = str;
    }
    void printNodeInfo()
    {
        cout << "Node Name: " << name << endl;
    }
};
class Server : public Node
{
protected:
    int id;

public:
    Server(string str, int n) : Node(str)
    {
        id = n;
    }
    void printServerInfo()
    {
        cout << "Server ID: " << id << endl;
    }
};
class Device : public Server
{
private:
    string type;

public:
    Device(string str, int n, string t) : Server(str, n)
    {
        type = t;
    }
    void printDeviceInfo()
    {
        cout << "Device Type: " << type << endl;
    }
};
int main()
{
    Device mydevice("DeviceA", 1, "Smartphone");
    mydevice.printNodeInfo();
    mydevice.printServerInfo();
    mydevice.printDeviceInfo();
    return 0;
}