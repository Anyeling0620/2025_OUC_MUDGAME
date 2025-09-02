#ifndef TRAININGEFFICIENCYSKILL_H
#define TRAININGEFFICIENCYSKILL_H

#include "AbstractSkill.h"
#include "../entity/player/Player.h"

// 假设 TrainingSystem 已提供训练效率接口
class TrainingSystem; // 前向声明

class TrainingEfficiencySkill : public AbstractSkill {
protected:
    float trainingMultiplier; // 训练效率倍率
    std::string attributeType; // 属性类型: "agility", "stamina", "strength"
    
    // 假设 TrainingSystem 已提供设置训练倍率的接口
    TrainingSystem* trainingSystem;

public:
    TrainingEfficiencySkill(const std::string& name, const std::string& desc, 
                          float multiplier, const std::string& attrType,
                          TrainingSystem* trainingSys = nullptr);
    
    virtual ~TrainingEfficiencySkill() = default;

    // 设置训练系统引用
    void setTrainingSystem(TrainingSystem* trainingSys);
    
    // 获取训练倍率
    float getTrainingMultiplier() const;
    
    // 获取属性类型
    std::string getAttributeType() const;
    
    // 设置训练倍率
    void setTrainingMultiplier(float multiplier);
    
    // 设置属性类型
    void setAttributeType(const std::string& attrType);

    // 计算命中率（训练技能通常100%命中）
    virtual float calculateHitRate(int playerAgility, int playerStrength, int playerStamina) const override;
    
    // 计算体力消耗（训练技能消耗固定）
    virtual int calculateStaminaCost(int playerStrength) const override;
    
    // 执行训练效率提升（假设 TrainingSystem 已提供设置训练倍率的接口）
    // 3virtual void execute(Player& user, AbstractEntity& target) override;
};

#endif // TRAININGEFFICIENCYSKILL_H