/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_DATCMANAGER_DATC_Manager_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_DATCMANAGER_DATC_Manager_STUB_DEFAULT_HPP_


#include <v1/com/ivis/DATCManager/DATCManagerStub.hpp>
#include <sstream>

namespace v1 {
namespace com {
namespace ivis {
namespace DATCManager {

/**
 * Provides a default implementation for DATCManagerStubRemoteEvent and
 * DATCManagerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class DATCManagerStubDefault
    : public virtual DATCManagerStub {
public:
    DATCManagerStubDefault();

    DATCManagerStubRemoteEvent* initStubAdapter(const std::shared_ptr<DATCManagerStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode& getTemperatureModeAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode& getTemperatureModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTemperatureModeAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode _value);
    virtual void setTemperatureModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode _value);
    virtual const bool& getDualModeAttribute();
    virtual const bool& getDualModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setDualModeAttribute(bool _value);
    virtual void setDualModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const bool& getAutoModeAttribute();
    virtual const bool& getAutoModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setAutoModeAttribute(bool _value);
    virtual void setAutoModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const bool& getAirConditionerRunAttribute();
    virtual const bool& getAirConditionerRunAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setAirConditionerRunAttribute(bool _value);
    virtual void setAirConditionerRunAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const bool& getHeaterRunAttribute();
    virtual const bool& getHeaterRunAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setHeaterRunAttribute(bool _value);
    virtual void setHeaterRunAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const double& getInteriorTemperautreAttribute();
    virtual const double& getInteriorTemperautreAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setInteriorTemperautreAttribute(double _value);
    virtual const double& getExteriorTemperatureAttribute();
    virtual const double& getExteriorTemperatureAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setExteriorTemperatureAttribute(double _value);
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures& getTargetTemperaturesAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures& getTargetTemperaturesAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTargetTemperaturesAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures _value);
    virtual void setTargetTemperaturesAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures _value);
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections& getFanDirectionsAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections& getFanDirectionsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setFanDirectionsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections _value);
    virtual void setFanDirectionsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections _value);
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds& getFanSpeedsAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds& getFanSpeedsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setFanSpeedsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds _value);
    virtual void setFanSpeedsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds _value);
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts& getDefrostsAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts& getDefrostsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setDefrostsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts _value);
    virtual void setDefrostsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts _value);
    virtual const bool& getAirRecirculationAttribute();
    virtual const bool& getAirRecirculationAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setAirRecirculationAttribute(bool _value);
    virtual void setAirRecirculationAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const bool& getSteeringWheelHeaterAttribute();
    virtual const bool& getSteeringWheelHeaterAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setSteeringWheelHeaterAttribute(bool _value);
    virtual void setSteeringWheelHeaterAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters& getSeatHeatersAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters& getSeatHeatersAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setSeatHeatersAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters _value);
    virtual void setSeatHeatersAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters _value);
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers& getSeatCoolersAttribute();
    virtual const ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers& getSeatCoolersAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setSeatCoolersAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers _value);
    virtual void setSeatCoolersAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers _value);

    virtual void requestGetSupportedTemperatureRange(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSupportedTemperatureRangeReply_t _reply);
    virtual void requestSetTargetTemperature(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType _areaType, double _temperature, requestSetTargetTemperatureReply_t _reply);
    virtual void requestSetTargetTemperatureByDelta(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType _areaType, double _temperatureDelta, requestSetTargetTemperatureByDeltaReply_t _reply);
    virtual void requestGetSupportedFanDirection(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSupportedFanDirectionReply_t _reply);
    virtual void requestGetSupportedFanSpeedRange(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSupportedFanSpeedRangeReply_t _reply);
    virtual void requestSetFanSpeed(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType _areaType, uint16_t _fanSpeed, requestSetFanSpeedReply_t _reply);
    virtual void requestSetFanSpeedByDelta(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType _areaType, uint16_t _fanSpeedDelta, requestSetFanSpeedByDeltaReply_t _reply);
    virtual void requestGetSupportedDefrostTarget(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSupportedDefrostTargetReply_t _reply);
    virtual void requestGetSteeringWheelHeaterSupported(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSteeringWheelHeaterSupportedReply_t _reply);
    virtual void requestGetSeatHeaterSupported(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSeatHeaterSupportedReply_t _reply);
    virtual void requestGetSeatCoolerSupported(const std::shared_ptr<CommonAPI::ClientId> _client, requestGetSeatCoolerSupportedReply_t _reply);

virtual void fireResponseGetSupportedTemperatureRangeEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::TemperatureRange &_temperatureRange);
virtual void fireResponseSetTargetTemperatureEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperature);
virtual void fireResponseGetSupportedFanDirectionEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::SupportedFanDirectionList &_supportedFanDirectionList);
virtual void fireResponseSetFanDirectionEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const ::v1::com::ivis::DATCManager::DATCManagerTypes::EHvacFanDirection &_fanDirection);
virtual void fireResponseGetSupportedFanSpeedRangeEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeedRange &_fanSpeedRange);
virtual void fireResponseSetFanSpeedEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeed);
virtual void fireResponseGetSupportedDefrostTargetEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::SupportedDefrostTargetList &_supportedDefrostTargetList);
virtual void fireResponseSetAirRecirculationEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const bool &_on);
virtual void fireResponseGetSteeringWheelHeaterSupportedEvent(const bool &_steeringWheelHeaterSupported);
virtual void fireResponseSetSteeringWheelHeaterEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const bool &_on);
virtual void fireResponseGetSeatHeaterSupportedEvent(const bool &_seatHeaterSupported);
virtual void fireResponseSetSeatHeaterEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const bool &_on);
virtual void fireResponseGetSeatCoolerSupportedEvent(const bool &_seatCoolerSupported);
virtual void fireResponseSetSeatCoolerEvent(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult &_result, const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const bool &_on);


protected:
    virtual bool trySetTemperatureModeAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode _value);
    virtual bool validateTemperatureModeAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode &_value);
    virtual void onRemoteTemperatureModeAttributeChanged();
    virtual bool trySetDualModeAttribute(bool _value);
    virtual bool validateDualModeAttributeRequestedValue(const bool &_value);
    virtual void onRemoteDualModeAttributeChanged();
    virtual bool trySetAutoModeAttribute(bool _value);
    virtual bool validateAutoModeAttributeRequestedValue(const bool &_value);
    virtual void onRemoteAutoModeAttributeChanged();
    virtual bool trySetAirConditionerRunAttribute(bool _value);
    virtual bool validateAirConditionerRunAttributeRequestedValue(const bool &_value);
    virtual void onRemoteAirConditionerRunAttributeChanged();
    virtual bool trySetHeaterRunAttribute(bool _value);
    virtual bool validateHeaterRunAttributeRequestedValue(const bool &_value);
    virtual void onRemoteHeaterRunAttributeChanged();
    virtual bool trySetInteriorTemperautreAttribute(double _value);
    virtual bool validateInteriorTemperautreAttributeRequestedValue(const double &_value);
    virtual bool trySetExteriorTemperatureAttribute(double _value);
    virtual bool validateExteriorTemperatureAttributeRequestedValue(const double &_value);
    virtual bool trySetTargetTemperaturesAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures _value);
    virtual bool validateTargetTemperaturesAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures &_value);
    virtual void onRemoteTargetTemperaturesAttributeChanged();
    virtual bool trySetFanDirectionsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections _value);
    virtual bool validateFanDirectionsAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections &_value);
    virtual void onRemoteFanDirectionsAttributeChanged();
    virtual bool trySetFanSpeedsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds _value);
    virtual bool validateFanSpeedsAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds &_value);
    virtual void onRemoteFanSpeedsAttributeChanged();
    virtual bool trySetDefrostsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts _value);
    virtual bool validateDefrostsAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts &_value);
    virtual void onRemoteDefrostsAttributeChanged();
    virtual bool trySetAirRecirculationAttribute(bool _value);
    virtual bool validateAirRecirculationAttributeRequestedValue(const bool &_value);
    virtual void onRemoteAirRecirculationAttributeChanged();
    virtual bool trySetSteeringWheelHeaterAttribute(bool _value);
    virtual bool validateSteeringWheelHeaterAttributeRequestedValue(const bool &_value);
    virtual void onRemoteSteeringWheelHeaterAttributeChanged();
    virtual bool trySetSeatHeatersAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters _value);
    virtual bool validateSeatHeatersAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters &_value);
    virtual void onRemoteSeatHeatersAttributeChanged();
    virtual bool trySetSeatCoolersAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers _value);
    virtual bool validateSeatCoolersAttributeRequestedValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers &_value);
    virtual void onRemoteSeatCoolersAttributeChanged();
    class RemoteEventHandler: public virtual DATCManagerStubRemoteEvent {
    public:
        RemoteEventHandler(DATCManagerStubDefault *_defaultStub);

        virtual bool onRemoteSetTemperatureModeAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode _value);
        virtual bool onRemoteSetTemperatureModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode _value);
        virtual void onRemoteTemperatureModeAttributeChanged();

        virtual bool onRemoteSetDualModeAttribute(bool _value);
        virtual bool onRemoteSetDualModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteDualModeAttributeChanged();

        virtual bool onRemoteSetAutoModeAttribute(bool _value);
        virtual bool onRemoteSetAutoModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteAutoModeAttributeChanged();

        virtual bool onRemoteSetAirConditionerRunAttribute(bool _value);
        virtual bool onRemoteSetAirConditionerRunAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteAirConditionerRunAttributeChanged();

        virtual bool onRemoteSetHeaterRunAttribute(bool _value);
        virtual bool onRemoteSetHeaterRunAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteHeaterRunAttributeChanged();



        virtual bool onRemoteSetTargetTemperaturesAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures _value);
        virtual bool onRemoteSetTargetTemperaturesAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures _value);
        virtual void onRemoteTargetTemperaturesAttributeChanged();

        virtual bool onRemoteSetFanDirectionsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections _value);
        virtual bool onRemoteSetFanDirectionsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections _value);
        virtual void onRemoteFanDirectionsAttributeChanged();

        virtual bool onRemoteSetFanSpeedsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds _value);
        virtual bool onRemoteSetFanSpeedsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds _value);
        virtual void onRemoteFanSpeedsAttributeChanged();

        virtual bool onRemoteSetDefrostsAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts _value);
        virtual bool onRemoteSetDefrostsAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts _value);
        virtual void onRemoteDefrostsAttributeChanged();

        virtual bool onRemoteSetAirRecirculationAttribute(bool _value);
        virtual bool onRemoteSetAirRecirculationAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteAirRecirculationAttributeChanged();

        virtual bool onRemoteSetSteeringWheelHeaterAttribute(bool _value);
        virtual bool onRemoteSetSteeringWheelHeaterAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteSteeringWheelHeaterAttributeChanged();

        virtual bool onRemoteSetSeatHeatersAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters _value);
        virtual bool onRemoteSetSeatHeatersAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters _value);
        virtual void onRemoteSeatHeatersAttributeChanged();

        virtual bool onRemoteSetSeatCoolersAttribute(::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers _value);
        virtual bool onRemoteSetSeatCoolersAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers _value);
        virtual void onRemoteSeatCoolersAttributeChanged();


    private:
        DATCManagerStubDefault *defaultStub_;
    };
private:
    DATCManagerStubDefault::RemoteEventHandler remoteEventHandler_;

    ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode temperatureModeAttributeValue_ {};
    bool dualModeAttributeValue_ {};
    bool autoModeAttributeValue_ {};
    bool airConditionerRunAttributeValue_ {};
    bool heaterRunAttributeValue_ {};
    double interiorTemperautreAttributeValue_ {};
    double exteriorTemperatureAttributeValue_ {};
    ::v1::com::ivis::DATCManager::DATCManagerTypes::TargetTemperatures targetTemperaturesAttributeValue_ {};
    ::v1::com::ivis::DATCManager::DATCManagerTypes::FanDirections fanDirectionsAttributeValue_ {};
    ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeeds fanSpeedsAttributeValue_ {};
    ::v1::com::ivis::DATCManager::DATCManagerTypes::Defrosts defrostsAttributeValue_ {};
    bool airRecirculationAttributeValue_ {};
    bool steeringWheelHeaterAttributeValue_ {};
    ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatHeaters seatHeatersAttributeValue_ {};
    ::v1::com::ivis::DATCManager::DATCManagerTypes::SeatCoolers seatCoolersAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace DATCManager
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_1 = v1;

#endif // V1_COM_IVIS_DATCMANAGER_DATC_Manager_STUB_DEFAULT
