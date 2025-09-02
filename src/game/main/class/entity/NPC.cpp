#include "NPC.h"

NPC::NPC(const std::string &name, const std::string &intro) : _name_(name), _intro_(intro) {}

std::string NPC::getIntro() {
    return _intro_;
}

std::string NPC::getName() {
    return _name_;
}

