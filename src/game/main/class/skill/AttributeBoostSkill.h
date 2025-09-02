#ifndef ATTRIBUTEBOOSTSKILL_H
#define ATTRIBUTEBOOSTSKILL_H

#include "AbstractSkill.h"
#include "../entity/player/Player.h"

class AttributeBoostSkill : public AbstractSkill {
protected:
    // 提醒Player开发者 此处设置了属性最低值
    int minAttributeValue; // 最低属性值
    std::string attributeType; // 属性类型: "agility", "stamina", "strength"

public:
    AttributeBoostSkill(const std::string& name, const std::string& desc, 
                       int minValue, const std::string& attrType);
    
    virtual ~AttributeBoostSkill() = default;

    // 获取最低属性值
    int getMinAttributeValue() const;
    
    // 获取属性类型
    std::string getAttributeType() const;
    
    // 设置最低属性值
    void setMinAttributeValue(int minValue);
    
    // 设置属性类型
    void setAttributeType(const std::string& attrType);

    // 计算命中率（属性技能通常100%命中）
    virtual float calculateHitRate(int playerAgility, int playerStrength, int playerStamina) const override;
    
    // 计算体力消耗（属性技能消耗固定）
    virtual int calculateStaminaCost(int playerStrength) const override;
    
    // 执行属性增益（假设 Player 已提供设置最低属性的接口）
    // virtual void execute(Player& user, AbstractEntity& target) override;
};

#endif // ATTRIBUTEBOOSTSKILL_H