/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID ATTACK_ARCHERTOWER = 354991228U;
        static const AkUniqueID ATTACK_CANNONTOWER = 1825859782U;
        static const AkUniqueID ATTACK_CROSSBOWTOWER = 781691411U;
        static const AkUniqueID IMPACT_ARCHERTOWER = 3851137378U;
        static const AkUniqueID IMPACT_CANNONTOWER = 3210611180U;
        static const AkUniqueID IMPACT_CROSSBOWTOWER = 259899085U;
        static const AkUniqueID LEVEL_NEWRIVER_PLAY = 1932380825U;
        static const AkUniqueID LEVEL_NEWRIVER_STOP = 228478431U;
        static const AkUniqueID LEVEL_PLAYER_LIFEDECREASE = 3135830688U;
        static const AkUniqueID LEVEL_TOWERBUILDING = 3525318799U;
        static const AkUniqueID LEVEL_WALLCOLLAPSE = 3911213433U;
        static const AkUniqueID LEVEL_WARHORN = 3676066613U;
        static const AkUniqueID PLAY_GAMESTART = 1497459184U;
        static const AkUniqueID PLAY_MUSIC_CREDITS = 4121310008U;
        static const AkUniqueID PLAY_MUSIC_MENU = 1699343283U;
        static const AkUniqueID UI_BUTTON_BUTTONUPGRADE = 3915957147U;
        static const AkUniqueID UI_BUTTON_CLICK = 1664509575U;
        static const AkUniqueID UI_BUTTON_HOVER = 610582865U;
        static const AkUniqueID UI_BUTTON_NOMONEY = 3548983204U;
        static const AkUniqueID UI_BUTTON_RESEARCHEND = 1168892205U;
        static const AkUniqueID UI_BUTTON_RESEARCHSTART = 2567008422U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace DAYTIME
        {
            static const AkUniqueID GROUP = 4206605382U;

            namespace STATE
            {
                static const AkUniqueID DAY = 311764537U;
                static const AkUniqueID NIGHT = 1011622525U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID NOTIME = 2947967655U;
            } // namespace STATE
        } // namespace DAYTIME

        namespace MUSICMUTE
        {
            static const AkUniqueID GROUP = 153626945U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID OFF = 930712164U;
                static const AkUniqueID ON = 1651971902U;
            } // namespace STATE
        } // namespace MUSICMUTE

        namespace PAUSEMENU
        {
            static const AkUniqueID GROUP = 3494343696U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID NOPAUSE = 1658147866U;
                static const AkUniqueID PAUSE = 3092587493U;
            } // namespace STATE
        } // namespace PAUSEMENU

        namespace SFXMUTE
        {
            static const AkUniqueID GROUP = 1264305561U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID OFF = 930712164U;
                static const AkUniqueID ON = 1651971902U;
            } // namespace STATE
        } // namespace SFXMUTE

    } // namespace STATES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID VOLUME_MASTER = 3695994288U;
        static const AkUniqueID VOLUME_MUSIC = 3891337659U;
        static const AkUniqueID VOLUME_SFX = 3673881719U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMBIENCES = 1017660616U;
        static const AkUniqueID CREDITSMUSIC = 4107189454U;
        static const AkUniqueID DAYMUSIC = 3231935906U;
        static const AkUniqueID FX = 1802970371U;
        static const AkUniqueID LEVEL = 2782712965U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID NIGHTMUSIC = 1030219198U;
        static const AkUniqueID THEMEMUSIC = 450773281U;
        static const AkUniqueID TOWERS = 1982534943U;
        static const AkUniqueID UI = 1551306167U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID REVERB = 348963605U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
