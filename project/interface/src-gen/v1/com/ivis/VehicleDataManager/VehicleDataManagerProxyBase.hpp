/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_PROXY_BASE_HPP_
#define V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_PROXY_BASE_HPP_

#include <v1/com/ivis/VehicleDataManager/VehicleDataManager.hpp>


#include <v1/com/ivis/VehicleDataManager/VehicleDataManagerTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Proxy.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace VehicleDataManager {

class VehicleDataManagerProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableAttribute<::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed> VehicleSpeedAttribute;
    typedef CommonAPI::ObservableAttribute<std::string> VinAttribute;
    typedef CommonAPI::ObservableAttribute<::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus> TransmissionGearStatusAttribute;
    typedef CommonAPI::ObservableAttribute<bool> DrivingRestrictionAttribute;
    typedef CommonAPI::ObservableAttribute<bool> LowFuelWarningAttribute;


    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    virtual VehicleSpeedAttribute& getVehicleSpeedAttribute() = 0;
    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    virtual VinAttribute& getVinAttribute() = 0;
    /**
     * description: This attribute contains the current status of transmission gear.
     */
    virtual TransmissionGearStatusAttribute& getTransmissionGearStatusAttribute() = 0;
    virtual DrivingRestrictionAttribute& getDrivingRestrictionAttribute() = 0;
    virtual LowFuelWarningAttribute& getLowFuelWarningAttribute() = 0;


};

} // namespace VehicleDataManager
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_1 = v1;

#endif // V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_PROXY_BASE_HPP_
