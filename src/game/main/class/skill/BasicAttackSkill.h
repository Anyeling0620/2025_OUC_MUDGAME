#ifndef BASICSKILL_H
#define BASICSKILL_H

#include "AbstractSkill.h"
#include "../entity/player/Player.h"

// 假设 BattleSystem 已提供攻击接口
class BattleSystem; // 前向声明

class BasicAttackSkill : public AbstractSkill {
protected:
    // 假设 BattleSystem 已提供攻击执行接口
    BattleSystem* battleSystem;

public:
    BasicAttackSkill(const std::string& name, const std::string& desc, 
                    int baseDmg, float dmgCoeff, 
                    int baseHit, float hitCoeff, 
                    int baseStamina, float staminaCoeff,
                    BattleSystem* battleSys = nullptr);
    
    virtual ~BasicAttackSkill() = default;

    // 设置战斗系统引用
    void setBattleSystem(BattleSystem* battleSys);

    // 计算最终伤害：基础伤害 + 力量 × 伤害系数
    virtual int calculateDamage(int playerStrength) const override;
    
    // 计算命中率：基础命中率 + (敏捷/(力量+敏捷+耐力)×3) × 命中系数
    virtual float calculateHitRate(int playerAgility, int playerStrength, int playerStamina) const override;
    
    // 计算体力消耗：基础体力消耗 + 力量 × 体力消耗系数
    virtual int calculateStaminaCost(int playerStrength) const override;
    
    // 执行攻击（纯虚函数，具体攻击方式由子类实现）
    // virtual void execute(Player& user, AbstractEntity& target) override = 0;
};

#endif // BASICSKILL_H