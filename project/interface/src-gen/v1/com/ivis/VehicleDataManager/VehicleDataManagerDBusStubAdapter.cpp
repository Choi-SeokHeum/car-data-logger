/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201601121430.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/VehicleDataManager/VehicleDataManager.hpp>
#include <v1/com/ivis/VehicleDataManager/VehicleDataManagerDBusStubAdapter.hpp>

namespace v1 {
namespace com {
namespace ivis {
namespace VehicleDataManager {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createVehicleDataManagerDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<VehicleDataManagerDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerVehicleDataManagerDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	VehicleDataManager::getInterface(), &createVehicleDataManagerDBusStubAdapter);
}

VehicleDataManagerDBusStubAdapterInternal::~VehicleDataManagerDBusStubAdapterInternal() {
    deactivateManagedInstances();
    VehicleDataManagerDBusStubAdapterHelper::deinit();
}

void VehicleDataManagerDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* VehicleDataManagerDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getVehicleSpeedAttribute\">\n"
            "<arg name=\"value\" type=\"(ns)\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setVehicleSpeedAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"(ns)\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(ns)\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onVehicleSpeedAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(ns)\" />\n"
        "</signal>\n"
        "<method name=\"getVinAttribute\">\n"
            "<arg name=\"value\" type=\"s\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setVinAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onVinAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"s\" />\n"
        "</signal>\n"
        "<method name=\"getTransmissionGearStatusAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTransmissionGearStatusAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTransmissionGearStatusAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
        "</signal>\n"
        "<method name=\"getDrivingRestrictionAttribute\">\n"
            "<arg name=\"value\" type=\"b\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setDrivingRestrictionAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"b\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"b\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onDrivingRestrictionAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"b\" />\n"
        "</signal>\n"
        "<method name=\"getLowFuelWarningAttribute\">\n"
            "<arg name=\"value\" type=\"b\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setLowFuelWarningAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"b\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"b\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onLowFuelWarningAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"b\" />\n"
        "</signal>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        CommonAPI::Version
        > VehicleDataManagerDBusStubAdapterInternal::getVehicleDataManagerInterfaceVersionStubDispatcher(&VehicleDataManagerStub::getInterfaceVersion, "uu");

/**
 * description: This attribute contains the current speed of this vehicle. The unit of value is
 *   km/h or mph.
 */
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
        > VehicleDataManagerDBusStubAdapterInternal::getVehicleSpeedAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVehicleSpeedAttribute
            , "(ns)"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
        > VehicleDataManagerDBusStubAdapterInternal::setVehicleSpeedAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVehicleSpeedAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetVehicleSpeedAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteVehicleSpeedAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireVehicleSpeedAttributeChanged
                ,"(ns)"
                );
/**
 * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
 *   3779) information for this vehicle. It's 17 bytes long characters.
 */
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        std::string,
        CommonAPI::DBus::StringDeployment
        > VehicleDataManagerDBusStubAdapterInternal::getVinAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVinAttribute
            , "s"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        std::string,
        CommonAPI::DBus::StringDeployment
        > VehicleDataManagerDBusStubAdapterInternal::setVinAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVinAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetVinAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteVinAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireVinAttributeChanged
                ,"s"
                );
/**
 * description: This attribute contains the current status of transmission gear.
 */
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
        > VehicleDataManagerDBusStubAdapterInternal::getTransmissionGearStatusAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getTransmissionGearStatusAttribute
            , "i"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
        > VehicleDataManagerDBusStubAdapterInternal::setTransmissionGearStatusAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getTransmissionGearStatusAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetTransmissionGearStatusAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteTransmissionGearStatusAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireTransmissionGearStatusAttributeChanged
                ,"i"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal::getDrivingRestrictionAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getDrivingRestrictionAttribute
            , "b"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal::setDrivingRestrictionAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getDrivingRestrictionAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetDrivingRestrictionAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteDrivingRestrictionAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireDrivingRestrictionAttributeChanged
                ,"b"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal::getLowFuelWarningAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getLowFuelWarningAttribute
            , "b"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal::setLowFuelWarningAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getLowFuelWarningAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetLowFuelWarningAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteLowFuelWarningAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireLowFuelWarningAttributeChanged
                ,"b"
                );




/**
 * description: This attribute contains the current speed of this vehicle. The unit of value is
 *   km/h or mph.
 */
void VehicleDataManagerDBusStubAdapterInternal::fireVehicleSpeedAttributeChanged(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed& value) {
    CommonAPI::Deployable<::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed, ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t> deployedValue(value, static_cast<::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t*>(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
    >
    >>
        ::sendSignal(
            *this,
            "onVehicleSpeedAttributeChanged",
            "(ns)",
            deployedValue
    
    );
}
/**
 * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
 *   3779) information for this vehicle. It's 17 bytes long characters.
 */
void VehicleDataManagerDBusStubAdapterInternal::fireVinAttributeChanged(const std::string& value) {
    CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deployedValue(value, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        std::string,
        CommonAPI::DBus::StringDeployment
    >
    >>
        ::sendSignal(
            *this,
            "onVinAttributeChanged",
            "s",
            deployedValue
    
    );
}
/**
 * description: This attribute contains the current status of transmission gear.
 */
void VehicleDataManagerDBusStubAdapterInternal::fireTransmissionGearStatusAttributeChanged(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
    >>
        ::sendSignal(
            *this,
            "onTransmissionGearStatusAttributeChanged",
            "i",
            value
    
    );
}
void VehicleDataManagerDBusStubAdapterInternal::fireDrivingRestrictionAttributeChanged(const bool& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    bool
    >>
        ::sendSignal(
            *this,
            "onDrivingRestrictionAttributeChanged",
            "b",
            value
    
    );
}
void VehicleDataManagerDBusStubAdapterInternal::fireLowFuelWarningAttributeChanged(const bool& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    bool
    >>
        ::sendSignal(
            *this,
            "onLowFuelWarningAttributeChanged",
            "b",
            value
    
    );
}



const VehicleDataManagerDBusStubAdapterHelper::StubDispatcherTable& VehicleDataManagerDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& VehicleDataManagerDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

VehicleDataManagerDBusStubAdapterInternal::VehicleDataManagerDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      VehicleDataManagerDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<VehicleDataManagerStub>(_stub), false),
      stubDispatcherTable_({
            /**
             * description: This attribute contains the current speed of this vehicle. The unit of value is
             *   km/h or mph.
             */
            { { "getVehicleSpeedAttribute", "" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::getVehicleSpeedAttributeStubDispatcher }
            , { { "setVehicleSpeedAttribute", "(ns)" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::setVehicleSpeedAttributeStubDispatcher },
            /**
             * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
             *   3779) information for this vehicle. It's 17 bytes long characters.
             */
            { { "getVinAttribute", "" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::getVinAttributeStubDispatcher }
            , { { "setVinAttribute", "s" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::setVinAttributeStubDispatcher },
            /**
             * description: This attribute contains the current status of transmission gear.
             */
            { { "getTransmissionGearStatusAttribute", "" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::getTransmissionGearStatusAttributeStubDispatcher }
            , { { "setTransmissionGearStatusAttribute", "i" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::setTransmissionGearStatusAttributeStubDispatcher },
            { { "getDrivingRestrictionAttribute", "" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::getDrivingRestrictionAttributeStubDispatcher }
            , { { "setDrivingRestrictionAttribute", "b" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::setDrivingRestrictionAttributeStubDispatcher },
            { { "getLowFuelWarningAttribute", "" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::getLowFuelWarningAttributeStubDispatcher }
            , { { "setLowFuelWarningAttribute", "b" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::setLowFuelWarningAttributeStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &com::ivis::VehicleDataManager::VehicleDataManagerDBusStubAdapterInternal::getVehicleDataManagerInterfaceVersionStubDispatcher });
}

bool VehicleDataManagerDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace VehicleDataManager
} // namespace ivis
} // namespace com
} // namespace v1
