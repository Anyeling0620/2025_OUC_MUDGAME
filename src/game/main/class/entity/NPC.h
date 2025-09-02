#ifndef INC_2025_OUC_MUDGAME_ABSTRACTNPC_H
#define INC_2025_OUC_MUDGAME_ABSTRACTNPC_H

#include <string>


class NPC {
public:
    NPC(const NPC&) = default;
    NPC(const std::string& name, const std::string& intro);

    std::string getName();
    std::string getIntro();
private:
    std::string _name_;
    std::string _intro_;

};


#endif //INC_2025_OUC_MUDGAME_ABSTRACTNPC_H
