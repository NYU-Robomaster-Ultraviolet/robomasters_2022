#include "drivetrain_drive_command.hpp"
#

namespace src::Drivetrain
{

OmniDriveCommand::OmniDriveCommand(src::Drivers* drivers, DrivetrainSubsystem* dt) : 
drivers(drivers), dt(dt)
{
    addSubsystemRequirement(dynamic_cast<tap::control::Subsystem*>(dt));
}

void OmniDriveCommand::initialize()
{
    aSet = false;
}

void OmniDriveCommand::execute()
{
    aSet = true;
    float_t x = drivers->remote.getChannel(tap::Remote::Channel::LEFT_HORIZONTAL);
    float_t y = drivers->remote.getChannel(tap::Remote::Channel::LEFT_VERTICAL);
    float_t rot =  drivers->remote.getChannel(tap::Remote::Channel::RIGHT_HORIZONTAL);
    
    dt->setDesiredOutput(x, y, rot);
    
    drivers->leds.set(drivers->leds.Blue, aSet);
    drivers->leds.set(drivers->leds.Red, aSet);
}

void OmniDriveCommand::end(bool)
{
    dt->setDesiredOutput(0, 0, 0);
    aSet = false;
}

bool OmniDriveCommand::isFinished() const
{
    return false;
}

bool OmniDriveCommand::isReady()
{
    return true;
}

}