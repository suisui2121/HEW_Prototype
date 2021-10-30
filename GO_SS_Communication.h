#include "GameObject.h"
class GO_SS_BackGround;
class GO_SS_Player;
class GO_SS_Wall;
class GO_SS_ShotString;

class GO_SS_Communication :
    public GameObject
{
public:
    // GameObject ����Čp������܂���
    virtual void Initialize(void) override {};
    virtual void Finalize(void) override {};
    virtual void Update(void) override;
    virtual void Draw(void) override {};
    virtual int GetGameScene(void) override { return GAME_SCENE; }

    void SetBackGround(GO_SS_BackGround* p_BackGround) { m_pBackGround = p_BackGround; }
    void SetPlayer(GO_SS_Player* p_Player) { m_pPlayer = p_Player; }
    void SetWall(GO_SS_Wall* pWall) { m_pWall = pWall; }
    void SetShotString(GO_SS_ShotString* p) { m_pShotString = p; }

    void SetShotStringPlayer();
private:
    //�Q�[���V�[��
    const int GAME_SCENE = GAMESCENE_GAME_TEST;

    GO_SS_BackGround* m_pBackGround;
    GO_SS_Player* m_pPlayer;
    GO_SS_Wall* m_pWall;
    GO_SS_ShotString* m_pShotString;
};
