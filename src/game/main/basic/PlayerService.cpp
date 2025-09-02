#include "PlayerService.h"


void PlayerService::initialize() {
    // 初始化玩家服务
    // TODO
}

PlayerService& PlayerService::getInstance() {
    static PlayerService instance;
    return instance;
}

void PlayerService::shutdown() {
    // TODO
    // 玩家数据保存校徽逻辑
}


PlayerService::PlayerService() = default;

PlayerService::~PlayerService() = default;
