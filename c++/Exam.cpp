#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateData;
protected:
    int protectedData;
public:
    int publicData;

    Base() : privateData(0), protectedData(0), publicData(0) {}

    void setPrivateData(int value) {
        privateData = value;
    }

    void setProtectedData(int value) {
        protectedData = value;
    }

    void setPublicData(int value) {
        publicData = value;
    }

    int getPrivateData() const {
        return privateData;
    }

    int getProtectedData() const {
        return protectedData;
    }

    int getPublicData() const {
        return publicData;
    }

    void display() const {
        cout << "Private Data: " << privateData <<endl;
        cout << "Protected Data: " << protectedData <<endl;
        cout << "Public Data: " << publicData <<endl;
    }
};

// Derived class with public inheritance
class PublicDerived : public Base {
public:
    void accessBaseMembers() {
        // Accessible in the derived class
    cout << "Public Derived Class Access:" <<endl;
        // privateData is not accessible
        // std::cout << "Private Data: " << privateData << std::endl;
    cout << "Protected Data: " << protectedData <<endl;
    cout << "Public Data: " << publicData <<endl; 
    }
};

// Derived class with protected inheritance
class ProtectedDerived : protected Base {
public:
    void accessBaseMembers() {
        // Accessible in the derived class
    cout << "Protected Derived Class Access:" <<endl;
        // privateData is not accessible
        // std::cout << "Private Data: " << privateData << std::endl;
    cout << "Protected Data: " << protectedData <<endl;
    cout << "Public Data: " << publicData <<endl;
    }
};

// Derived class with private inheritance
class PrivateDerived : private Base {
public:
    void accessBaseMembers() {
        // Accessible in the derived class
    cout << "Private Derived Class Access:" <<endl;
        // privateData is not accessible
        // std::cout << "Private Data: " << privateData << std::endl;
    cout << "Protected Data: " << protectedData <<endl;
    cout << "Public Data: " << publicData <<endl;
    }
};

int main() {
    // Create objects
    PublicDerived publicDerived;
    ProtectedDerived protectedDerived;
    PrivateDerived privateDerived;

    // Access members through derived classes
    publicDerived.accessBaseMembers();
    protectedDerived.accessBaseMembers();
    privateDerived.accessBaseMembers();

    return 0;
}


