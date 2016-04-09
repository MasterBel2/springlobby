/* This file is part of the Springlobby (GPL v2 or later), see COPYING */

#ifndef SPRINGLOBBY_HEADERGUARD_MAINJOINBATTLETAB_H
#define SPRINGLOBBY_HEADERGUARD_MAINJOINBATTLETAB_H

#include <wx/scrolwin.h>
#include "battleroommmoptionstab.h"

class IBattle;
class User;
class IBattleRoomTab;
class IBattleMapTab;
class BattleOptionsTab;
class wxBoxSizer;
class wxImageList;
class SLNotebook;
class wxNotebook;
class ChatPanel;

class MainJoinBattleTab : public wxPanel
{
public:
	MainJoinBattleTab(wxWindow* parent);
	~MainJoinBattleTab();

	void HostBattle(IBattle& battle);
	void JoinBattle(IBattle& battle);
	//void UpdateCurrentBattle();
	void UpdateCurrentBattle();
	void UpdateCurrentBattle(const wxString& Tag);
	void LeaveCurrentBattle(bool called_from_join = false);
	void OnDisconnected()
	{
		LeaveCurrentBattle();
	}
	IBattle* GetCurrentBattle();
	ChatPanel* GetActiveChatPanel();

	void BattleUserUpdated(User& user);
	IBattleRoomTab& GetBattleRoomTab();

	void ReloadPresetList();

	void LoadPerspective(const wxString& perspective_name = wxEmptyString);
	void SavePerspective(const wxString& perspective_name = wxEmptyString);
	bool UseBattlePerspective();

private:
	IBattleMapTab& GetBattleMapTab();
	BattleOptionsTab& GetOptionsTab();
	BattleroomMMOptionsTab& GetMMOptionsTab();
	wxBoxSizer* m_main_sizer;

	wxImageList* m_imagelist;

	SLNotebook* m_tabs;

	IBattleRoomTab* m_battle_tab;
	IBattleMapTab* m_map_tab;
	BattleOptionsTab* m_opts_tab;
	BattleroomMMOptionsTab* m_mm_opts_tab;

	enum {
		BATTLE_TABS = wxID_HIGHEST
	};
};


#endif // SPRINGLOBBY_HEADERGUARD_MAINJOINBATTLETAB_H
