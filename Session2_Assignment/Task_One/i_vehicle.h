#ifndef IVEHICLE_H
#define IVEHICLE_H

class IVehicle
{
public:
    virtual void StartEngine() = 0;
    virtual void StopEngine() = 0;
    virtual void Drive() = 0;
};

#endif