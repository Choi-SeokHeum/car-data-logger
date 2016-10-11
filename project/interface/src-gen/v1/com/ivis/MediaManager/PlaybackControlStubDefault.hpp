/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_MEDIAMANAGER_Playback_Control_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_MEDIAMANAGER_Playback_Control_STUB_DEFAULT_HPP_


#include <v1/com/ivis/MediaManager/PlaybackControlStub.hpp>
#include <sstream>

namespace v1 {
namespace com {
namespace ivis {
namespace MediaManager {

/**
 * Provides a default implementation for PlaybackControlStubRemoteEvent and
 * PlaybackControlStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class PlaybackControlStubDefault
    : public virtual PlaybackControlStub {
public:
    PlaybackControlStubDefault();

    PlaybackControlStubRemoteEvent* initStubAdapter(const std::shared_ptr<PlaybackControlStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& getRepeatModeAttribute();
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& getRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
    virtual void setRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& getPlayModeAttribute();
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& getPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
    virtual void setPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& getCurrentTrackInfoAttribute();
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& getCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
    virtual void setCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
    virtual const uint32_t& getCurrentTrackNumberAttribute();
    virtual const uint32_t& getCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setCurrentTrackNumberAttribute(uint32_t _value);
    virtual void setCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
    virtual const uint32_t& getTotalTrackNumberAttribute();
    virtual const uint32_t& getTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTotalTrackNumberAttribute(uint32_t _value);
    virtual void setTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
    virtual const bool& getVideoVisibleAttribute();
    virtual const bool& getVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setVideoVisibleAttribute(bool _value);
    virtual void setVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& getPlayStateInfoAttribute();
    virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& getPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
    virtual void setPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);

    virtual void requestAction(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::Action _action, uint64_t _value, requestActionReply_t _reply);
    virtual void requestPlay(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _indexOfplaylist, requestPlayReply_t _reply);
    virtual void requestPlayBrowsingSession(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _browsingSessionId, uint64_t _uniqueId, requestPlayBrowsingSessionReply_t _reply);
    virtual void requestSetTimePosition(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _time, requestSetTimePositionReply_t _reply);
    virtual void requestGetPlaylist(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList _resultTypes, uint32_t _startIndex, int32_t _amount, requestGetPlaylistReply_t _reply);
    virtual void requestSetRepeatMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _mode, requestSetRepeatModeReply_t _reply);
    virtual void requestSetPlayMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _mode, requestSetPlayModeReply_t _reply);

virtual void fireNotifiyTimePositionInfoChangedEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TimePositionInfo &_timePositionInfo);
virtual void fireResponseGetPlaylistEvent(const uint32_t &_startIndex, const int32_t &_amount, const ::v1::com::ivis::MediaManager::MediaManagerTypes::Playlist &_playlist);
virtual void fireNotifyPlaylistChangedEvent();
virtual void fireNotifyPlaybackErrorEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlaybackError &_errType);


protected:
    virtual bool trySetRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
    virtual bool validateRepeatModeAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode &_value);
    virtual void onRemoteRepeatModeAttributeChanged();
    virtual bool trySetPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
    virtual bool validatePlayModeAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode &_value);
    virtual void onRemotePlayModeAttributeChanged();
    virtual bool trySetCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
    virtual bool validateCurrentTrackInfoAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo &_value);
    virtual void onRemoteCurrentTrackInfoAttributeChanged();
    virtual bool trySetCurrentTrackNumberAttribute(uint32_t _value);
    virtual bool validateCurrentTrackNumberAttributeRequestedValue(const uint32_t &_value);
    virtual void onRemoteCurrentTrackNumberAttributeChanged();
    virtual bool trySetTotalTrackNumberAttribute(uint32_t _value);
    virtual bool validateTotalTrackNumberAttributeRequestedValue(const uint32_t &_value);
    virtual void onRemoteTotalTrackNumberAttributeChanged();
    virtual bool trySetVideoVisibleAttribute(bool _value);
    virtual bool validateVideoVisibleAttributeRequestedValue(const bool &_value);
    virtual void onRemoteVideoVisibleAttributeChanged();
    virtual bool trySetPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
    virtual bool validatePlayStateInfoAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo &_value);
    virtual void onRemotePlayStateInfoAttributeChanged();
    class RemoteEventHandler: public virtual PlaybackControlStubRemoteEvent {
    public:
        RemoteEventHandler(PlaybackControlStubDefault *_defaultStub);

        virtual bool onRemoteSetRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
        virtual bool onRemoteSetRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
        virtual void onRemoteRepeatModeAttributeChanged();

        virtual bool onRemoteSetPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
        virtual bool onRemoteSetPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
        virtual void onRemotePlayModeAttributeChanged();

        virtual bool onRemoteSetCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
        virtual bool onRemoteSetCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
        virtual void onRemoteCurrentTrackInfoAttributeChanged();

        virtual bool onRemoteSetCurrentTrackNumberAttribute(uint32_t _value);
        virtual bool onRemoteSetCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
        virtual void onRemoteCurrentTrackNumberAttributeChanged();

        virtual bool onRemoteSetTotalTrackNumberAttribute(uint32_t _value);
        virtual bool onRemoteSetTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
        virtual void onRemoteTotalTrackNumberAttributeChanged();

        virtual bool onRemoteSetVideoVisibleAttribute(bool _value);
        virtual bool onRemoteSetVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteVideoVisibleAttributeChanged();

        virtual bool onRemoteSetPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
        virtual bool onRemoteSetPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
        virtual void onRemotePlayStateInfoAttributeChanged();


    private:
        PlaybackControlStubDefault *defaultStub_;
    };
private:
    PlaybackControlStubDefault::RemoteEventHandler remoteEventHandler_;

    ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode repeatModeAttributeValue_ {};
    ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode playModeAttributeValue_ {};
    ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo currentTrackInfoAttributeValue_ {};
    uint32_t currentTrackNumberAttributeValue_ {};
    uint32_t totalTrackNumberAttributeValue_ {};
    bool videoVisibleAttributeValue_ {};
    ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo playStateInfoAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace MediaManager
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_MEDIAMANAGER_Playback_Control_STUB_DEFAULT
