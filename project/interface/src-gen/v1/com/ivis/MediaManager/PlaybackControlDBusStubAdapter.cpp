/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201601121430.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/MediaManager/PlaybackControl.hpp>
#include <v1/com/ivis/MediaManager/PlaybackControlDBusStubAdapter.hpp>

namespace v1 {
namespace com {
namespace ivis {
namespace MediaManager {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createPlaybackControlDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<PlaybackControlDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerPlaybackControlDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	PlaybackControl::getInterface(), &createPlaybackControlDBusStubAdapter);
}

PlaybackControlDBusStubAdapterInternal::~PlaybackControlDBusStubAdapterInternal() {
    deactivateManagedInstances();
    PlaybackControlDBusStubAdapterHelper::deinit();
}

void PlaybackControlDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* PlaybackControlDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getRepeatModeAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setRepeatModeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onRepeatModeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
        "</signal>\n"
        "<method name=\"getPlayModeAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setPlayModeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onPlayModeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
        "</signal>\n"
        "<method name=\"getCurrentTrackInfoAttribute\">\n"
            "<arg name=\"value\" type=\"(ttussssss)\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setCurrentTrackInfoAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"(ttussssss)\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(ttussssss)\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onCurrentTrackInfoAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(ttussssss)\" />\n"
        "</signal>\n"
        "<method name=\"getCurrentTrackNumberAttribute\">\n"
            "<arg name=\"value\" type=\"u\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setCurrentTrackNumberAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onCurrentTrackNumberAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"u\" />\n"
        "</signal>\n"
        "<method name=\"getTotalTrackNumberAttribute\">\n"
            "<arg name=\"value\" type=\"u\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTotalTrackNumberAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTotalTrackNumberAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"u\" />\n"
        "</signal>\n"
        "<method name=\"getVideoVisibleAttribute\">\n"
            "<arg name=\"value\" type=\"b\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setVideoVisibleAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"b\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"b\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onVideoVisibleAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"b\" />\n"
        "</signal>\n"
        "<method name=\"getPlayStateInfoAttribute\">\n"
            "<arg name=\"value\" type=\"(ti)\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setPlayStateInfoAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"(ti)\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(ti)\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onPlayStateInfoAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(ti)\" />\n"
        "</signal>\n"
        "<signal name=\"notifiyTimePositionInfoChanged\">\n"
            "<arg name=\"timePositionInfo\" type=\"(tuuu)\" />\n"
        "</signal>\n"
        "<signal name=\"responseGetPlaylist\">\n"
            "<arg name=\"startIndex\" type=\"u\" />\n"
            "<arg name=\"amount\" type=\"i\" />\n"
            "<arg name=\"playlist\" type=\"a(ttussssss)\" />\n"
        "</signal>\n"
        "<signal name=\"notifyPlaylistChanged\">\n"
        "</signal>\n"
        "<signal name=\"notifyPlaybackError\">\n"
            "<arg name=\"errType\" type=\"i\" />\n"
        "</signal>\n"
        "<method name=\"requestAction\">\n"
            "<arg name=\"_action\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"_value\" type=\"t\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"requestPlay\">\n"
            "<arg name=\"_indexOfplaylist\" type=\"t\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"requestPlayBrowsingSession\">\n"
            "<arg name=\"_browsingSessionId\" type=\"t\" direction=\"in\" />\n"
            "<arg name=\"_uniqueId\" type=\"t\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"requestSetTimePosition\">\n"
            "<arg name=\"_time\" type=\"u\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"requestGetPlaylist\">\n"
            "<arg name=\"_resultTypes\" type=\"ai\" direction=\"in\" />\n"
            "<arg name=\"_startIndex\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_amount\" type=\"i\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"requestSetRepeatMode\">\n"
            "<arg name=\"_mode\" type=\"i\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"requestSetPlayMode\">\n"
            "<arg name=\"_mode\" type=\"i\" direction=\"in\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        CommonAPI::Version
        > PlaybackControlDBusStubAdapterInternal::getPlaybackControlInterfaceVersionStubDispatcher(&PlaybackControlStub::getInterfaceVersion, "uu");

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode
        > PlaybackControlDBusStubAdapterInternal::getRepeatModeAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getRepeatModeAttribute
            , "i"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode
        > PlaybackControlDBusStubAdapterInternal::setRepeatModeAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getRepeatModeAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetRepeatModeAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteRepeatModeAttributeChanged
                ,&PlaybackControlStubAdapter::fireRepeatModeAttributeChanged
                ,"i"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode
        > PlaybackControlDBusStubAdapterInternal::getPlayModeAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getPlayModeAttribute
            , "i"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode
        > PlaybackControlDBusStubAdapterInternal::setPlayModeAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getPlayModeAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetPlayModeAttribute,
                &PlaybackControlStubRemoteEvent::onRemotePlayModeAttributeChanged
                ,&PlaybackControlStubAdapter::firePlayModeAttributeChanged
                ,"i"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo,
        ::v1::com::ivis::MediaManager::MediaManagerTypes_::TrackInfoDeployment_t
        > PlaybackControlDBusStubAdapterInternal::getCurrentTrackInfoAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getCurrentTrackInfoAttribute
            , "(ttussssss)"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo,
        ::v1::com::ivis::MediaManager::MediaManagerTypes_::TrackInfoDeployment_t
        > PlaybackControlDBusStubAdapterInternal::setCurrentTrackInfoAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getCurrentTrackInfoAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetCurrentTrackInfoAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteCurrentTrackInfoAttributeChanged
                ,&PlaybackControlStubAdapter::fireCurrentTrackInfoAttributeChanged
                ,"(ttussssss)"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        uint32_t
        > PlaybackControlDBusStubAdapterInternal::getCurrentTrackNumberAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getCurrentTrackNumberAttribute
            , "u"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        uint32_t
        > PlaybackControlDBusStubAdapterInternal::setCurrentTrackNumberAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getCurrentTrackNumberAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetCurrentTrackNumberAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteCurrentTrackNumberAttributeChanged
                ,&PlaybackControlStubAdapter::fireCurrentTrackNumberAttributeChanged
                ,"u"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        uint32_t
        > PlaybackControlDBusStubAdapterInternal::getTotalTrackNumberAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getTotalTrackNumberAttribute
            , "u"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        uint32_t
        > PlaybackControlDBusStubAdapterInternal::setTotalTrackNumberAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getTotalTrackNumberAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetTotalTrackNumberAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteTotalTrackNumberAttributeChanged
                ,&PlaybackControlStubAdapter::fireTotalTrackNumberAttributeChanged
                ,"u"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        bool
        > PlaybackControlDBusStubAdapterInternal::getVideoVisibleAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getVideoVisibleAttribute
            , "b"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        bool
        > PlaybackControlDBusStubAdapterInternal::setVideoVisibleAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getVideoVisibleAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetVideoVisibleAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteVideoVisibleAttributeChanged
                ,&PlaybackControlStubAdapter::fireVideoVisibleAttributeChanged
                ,"b"
                );
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo,
        ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlayStateInfoDeployment_t
        > PlaybackControlDBusStubAdapterInternal::getPlayStateInfoAttributeStubDispatcher(
            &::v1::com::ivis::MediaManager::PlaybackControlStub::getPlayStateInfoAttribute
            , "(ti)"
            );
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::MediaManager::PlaybackControlStub,
        ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo,
        ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlayStateInfoDeployment_t
        > PlaybackControlDBusStubAdapterInternal::setPlayStateInfoAttributeStubDispatcher(
                &::v1::com::ivis::MediaManager::PlaybackControlStub::getPlayStateInfoAttribute,
                &PlaybackControlStubRemoteEvent::onRemoteSetPlayStateInfoAttribute,
                &PlaybackControlStubRemoteEvent::onRemotePlayStateInfoAttributeChanged
                ,&PlaybackControlStubAdapter::firePlayStateInfoAttributeChanged
                ,"(ti)"
                );



CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<::v1::com::ivis::MediaManager::MediaManagerTypes::Action, uint64_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestActionStubDispatcher(
    &PlaybackControlStub::requestAction, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<uint64_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestPlayStubDispatcher(
    &PlaybackControlStub::requestPlay, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<uint64_t, uint64_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestPlayBrowsingSessionStubDispatcher(
    &PlaybackControlStub::requestPlayBrowsingSession, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<uint32_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestSetTimePositionStubDispatcher(
    &PlaybackControlStub::requestSetTimePosition, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList, uint32_t, int32_t>,
    std::tuple<>,
    std::tuple<::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestGetPlaylistStubDispatcher(
    &PlaybackControlStub::requestGetPlaylist, "",
					std::make_tuple(static_cast<::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestSetRepeatModeStubDispatcher(
    &PlaybackControlStub::requestSetRepeatMode, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::com::ivis::MediaManager::PlaybackControlStub,
    std::tuple<::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > PlaybackControlDBusStubAdapterInternal::requestSetPlayModeStubDispatcher(
    &PlaybackControlStub::requestSetPlayMode, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());


void PlaybackControlDBusStubAdapterInternal::fireRepeatModeAttributeChanged(const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode
    >>
        ::sendSignal(
            *this,
            "onRepeatModeAttributeChanged",
            "i",
            value
    
    );
}
void PlaybackControlDBusStubAdapterInternal::firePlayModeAttributeChanged(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode
    >>
        ::sendSignal(
            *this,
            "onPlayModeAttributeChanged",
            "i",
            value
    
    );
}
void PlaybackControlDBusStubAdapterInternal::fireCurrentTrackInfoAttributeChanged(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& value) {
    CommonAPI::Deployable<::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo, ::v1::com::ivis::MediaManager::MediaManagerTypes_::TrackInfoDeployment_t> deployedValue(value, static_cast<::v1::com::ivis::MediaManager::MediaManagerTypes_::TrackInfoDeployment_t*>(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo,
        ::v1::com::ivis::MediaManager::MediaManagerTypes_::TrackInfoDeployment_t
    >
    >>
        ::sendSignal(
            *this,
            "onCurrentTrackInfoAttributeChanged",
            "(ttussssss)",
            deployedValue
    
    );
}
void PlaybackControlDBusStubAdapterInternal::fireCurrentTrackNumberAttributeChanged(const uint32_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    uint32_t
    >>
        ::sendSignal(
            *this,
            "onCurrentTrackNumberAttributeChanged",
            "u",
            value
    
    );
}
void PlaybackControlDBusStubAdapterInternal::fireTotalTrackNumberAttributeChanged(const uint32_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    uint32_t
    >>
        ::sendSignal(
            *this,
            "onTotalTrackNumberAttributeChanged",
            "u",
            value
    
    );
}
void PlaybackControlDBusStubAdapterInternal::fireVideoVisibleAttributeChanged(const bool& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    bool
    >>
        ::sendSignal(
            *this,
            "onVideoVisibleAttributeChanged",
            "b",
            value
    
    );
}
void PlaybackControlDBusStubAdapterInternal::firePlayStateInfoAttributeChanged(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& value) {
    CommonAPI::Deployable<::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo, ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlayStateInfoDeployment_t> deployedValue(value, static_cast<::v1::com::ivis::MediaManager::MediaManagerTypes_::PlayStateInfoDeployment_t*>(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo,
        ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlayStateInfoDeployment_t
    >
    >>
        ::sendSignal(
            *this,
            "onPlayStateInfoAttributeChanged",
            "(ti)",
            deployedValue
    
    );
}

void PlaybackControlDBusStubAdapterInternal::fireNotifiyTimePositionInfoChangedEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TimePositionInfo& timePositionInfo) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<::v1::com::ivis::MediaManager::MediaManagerTypes::TimePositionInfo, ::v1::com::ivis::MediaManager::MediaManagerTypes_::TimePositionInfoDeployment_t>
    >>::sendSignal(
            *this,
            "notifiyTimePositionInfoChanged",
            "(tuuu)",
    CommonAPI::Deployable<::v1::com::ivis::MediaManager::MediaManagerTypes::TimePositionInfo, ::v1::com::ivis::MediaManager::MediaManagerTypes_::TimePositionInfoDeployment_t>(timePositionInfo, static_cast<::v1::com::ivis::MediaManager::MediaManagerTypes_::TimePositionInfoDeployment_t*>(nullptr))
    );
}
void PlaybackControlDBusStubAdapterInternal::fireResponseGetPlaylistEvent(const uint32_t& startIndex, const int32_t& amount, const ::v1::com::ivis::MediaManager::MediaManagerTypes::Playlist& playlist) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    uint32_t,
    int32_t,
    CommonAPI::Deployable<::v1::com::ivis::MediaManager::MediaManagerTypes::Playlist, ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlaylistDeployment_t>
    >>::sendSignal(
            *this,
            "responseGetPlaylist",
            "uia(ttussssss)",
    startIndex,
    amount,
    CommonAPI::Deployable<::v1::com::ivis::MediaManager::MediaManagerTypes::Playlist, ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlaylistDeployment_t>(playlist, static_cast<::v1::com::ivis::MediaManager::MediaManagerTypes_::PlaylistDeployment_t*>(nullptr))
    );
}
void PlaybackControlDBusStubAdapterInternal::fireNotifyPlaylistChangedEvent() {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    >>::sendSignal(
            *this,
            "notifyPlaylistChanged",
            ""
    );
}
void PlaybackControlDBusStubAdapterInternal::fireNotifyPlaybackErrorEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlaybackError& errType) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v1::com::ivis::MediaManager::MediaManagerTypes::PlaybackError
    >>::sendSignal(
            *this,
            "notifyPlaybackError",
            "i",
    errType
    );
}


const PlaybackControlDBusStubAdapterHelper::StubDispatcherTable& PlaybackControlDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& PlaybackControlDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

PlaybackControlDBusStubAdapterInternal::PlaybackControlDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      PlaybackControlDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<PlaybackControlStub>(_stub), false),
      stubDispatcherTable_({
            { { "getRepeatModeAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getRepeatModeAttributeStubDispatcher }
            , { { "setRepeatModeAttribute", "i" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setRepeatModeAttributeStubDispatcher },
            { { "getPlayModeAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getPlayModeAttributeStubDispatcher }
            , { { "setPlayModeAttribute", "i" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setPlayModeAttributeStubDispatcher },
            { { "getCurrentTrackInfoAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getCurrentTrackInfoAttributeStubDispatcher }
            , { { "setCurrentTrackInfoAttribute", "(ttussssss)" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setCurrentTrackInfoAttributeStubDispatcher },
            { { "getCurrentTrackNumberAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getCurrentTrackNumberAttributeStubDispatcher }
            , { { "setCurrentTrackNumberAttribute", "u" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setCurrentTrackNumberAttributeStubDispatcher },
            { { "getTotalTrackNumberAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getTotalTrackNumberAttributeStubDispatcher }
            , { { "setTotalTrackNumberAttribute", "u" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setTotalTrackNumberAttributeStubDispatcher },
            { { "getVideoVisibleAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getVideoVisibleAttributeStubDispatcher }
            , { { "setVideoVisibleAttribute", "b" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setVideoVisibleAttributeStubDispatcher },
            { { "getPlayStateInfoAttribute", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getPlayStateInfoAttributeStubDispatcher }
            , { { "setPlayStateInfoAttribute", "(ti)" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::setPlayStateInfoAttributeStubDispatcher }
            ,
            { { "requestAction", "it" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestActionStubDispatcher },
            { { "requestPlay", "t" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestPlayStubDispatcher },
            { { "requestPlayBrowsingSession", "tt" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestPlayBrowsingSessionStubDispatcher },
            { { "requestSetTimePosition", "u" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestSetTimePositionStubDispatcher },
            { { "requestGetPlaylist", "aiui" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestGetPlaylistStubDispatcher },
            { { "requestSetRepeatMode", "i" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestSetRepeatModeStubDispatcher },
            { { "requestSetPlayMode", "i" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::requestSetPlayModeStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &com::ivis::MediaManager::PlaybackControlDBusStubAdapterInternal::getPlaybackControlInterfaceVersionStubDispatcher });
}

bool PlaybackControlDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace MediaManager
} // namespace ivis
} // namespace com
} // namespace v1
