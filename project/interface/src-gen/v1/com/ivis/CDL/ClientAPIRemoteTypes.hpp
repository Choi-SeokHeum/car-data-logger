/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CDL_Client_API_Remote_Types_HPP_
#define V1_COM_IVIS_CDL_Client_API_Remote_Types_HPP_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>
#include <CommonAPI/Variant.hpp>
#include <cstdint>
#include <memory>
#include <string>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

struct ClientAPIRemoteTypes {
    typedef CommonAPI::Variant<bool, int16_t, uint16_t, uint32_t, std::string>  CDLData;



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "com.ivis.CDL.ClientAPIRemoteTypes";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(1, 0);
}

}; // struct ClientAPIRemoteTypes

} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1

namespace CommonAPI {
}


namespace std {
}


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_CDL_Client_API_Remote_Types_HPP_
