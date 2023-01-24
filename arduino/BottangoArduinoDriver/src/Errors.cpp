#include <Arduino.h> 
#include "BottangoCore.h"

namespace Error
{
    void reportError_NoServoOnPin()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errNoServoOnPin"));
    }

    void reportError_ServoCollision()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errServoCollision"));
    }

    void reportError_NoSpaceAvailable()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errNoSpaceAvailable"));
    }

    void reportError_CmdTooLong()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errCmdTooLong"));
    }

    void reportError_TooManyCommands()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errTooManyCommands"));
    }

    void reportError_TooManyParams()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errTooManyParams"));
    }

    void reportError_MissingLibrary()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errMissingLibrary"));
    }

    void reportError_EnableSteppers()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errEnStep"));
    }

    void reportError_SteppersAndServos()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errSrv+Stp"));
    }

    void reportError_TooManyI2c()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errI2COverrun"));
    }

    void reportError_InvalidPin()
    {
        BottangoCore::serial.println();
        BottangoCore::serial.println(F("errInvalidPin"));
    }

} // namespace Error