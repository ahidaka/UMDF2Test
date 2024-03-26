/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    driver and application

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_UMDF2Test,
    0xc7505d18,0x5da9,0x4987,0xbd,0x8a,0x46,0x37,0x33,0x8a,0xba,0x4a);
// {c7505d18-5da9-4987-bd8a-4637338aba4a}
