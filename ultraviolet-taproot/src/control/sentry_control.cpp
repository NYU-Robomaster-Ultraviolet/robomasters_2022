#ifdef TARGET_SENTRY

#include "drivers.hpp"
#include "drivers_singleton.hpp"
//
#include "tap/control/command_mapper.hpp"
#include "tap/control/hold_command_mapping.hpp"
#include "tap/control/hold_repeat_command_mapping.hpp"
#include "tap/control/press_command_mapping.hpp"
#include "tap/control/setpoint/commands/calibrate_command.hpp"
#include "tap/control/toggle_command_mapping.hpp"
//include subsystems below

//include commands below

/*
 * NOTE: We are using the DoNotUse_getDrivers() function here
 *      because this file defines all subsystems and command
 *      and thus we must pass in the single statically allocated
 *      Drivers class to all of these objects.
 */
src::driversFunc drivers = src::DoNotUse_getDrivers;

using namespace tap;
using namespace tap::control;

//include subsystem namespaces below

namespace SentryControl {

// Define Subsystems Here

// Define Commands Here

// Define Command Mappings Here

// Register Subsystems with drivers->commandScheduler.registerSubsystem(&subsystem_name);
void registerSubsystems(src::Drivers* drivers)
{

}

// Initialize Subsystems with subsystem.initialize();
void initializeSubsystems()
{

}

// Set Default Command with subsystem.setDefaultCommand(&command)
void setDefaultCommands(src::Drivers* drivers)
{

}

// Set Commands scheduled on startup
void startupCommands(src::Drivers* drivers)
{

}

// Register IO Mappings with drivers->commandMapper.addMap(&commandMapping)
void registerIOMappings(src::Drivers* drivers)
{
    
}

} //namespace SentryControl

namespace src::Control 
{
    void initializeSubsystemCommands(src::Drivers* drivers)
    {
        SentryControl::initializeSubsystems();
        SentryControl::registerSubsystems(drivers);
        SentryControl::setDefaultCommands(drivers);
        SentryControl::startupCommands(drivers);
        SentryControl::registerIOMappings(drivers);
    }
}


#endif