/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201601121430.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CDL_Client_API_Local_DBUS_PROXY_HPP_
#define V1_COM_IVIS_CDL_Client_API_Local_DBUS_PROXY_HPP_

#include <v1/com/ivis/CDL/ClientAPILocalProxyBase.hpp>
#include "v1/com/ivis/CDL/ClientAPILocalDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

class ClientAPILocalDBusProxy
    : virtual public ClientAPILocalProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    ClientAPILocalDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~ClientAPILocalDBusProxy() { }


    virtual NotifyDataEvent& getNotifyDataEvent();

    virtual void storeData(const std::string &_domain, const std::string &_subDomain, const std::string &_id, const ClientAPILocalTypes::CDLData &_data, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> storeDataAsync(const std::string &_domain, const std::string &_subDomain, const std::string &_id, const ClientAPILocalTypes::CDLData &_data, StoreDataAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<NotifyDataEvent, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<::v1::com::ivis::CDL::ClientAPILocalTypes::CDLData, ClientAPILocalTypes_::CDLDataDeployment_t>> notifyData_;

};

} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_CDL_Client_API_Local_DBUS_PROXY_HPP_

