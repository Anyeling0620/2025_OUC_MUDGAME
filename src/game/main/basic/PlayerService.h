#ifndef PLAYER_SERVICE_H
#define PLAYER_SERVICE_H

#include "../class/entity/Player.h"
#include <string>

class PlayerService {
public:
    // 禁用复制和赋值
    PlayerService(const PlayerService&) = delete;
    PlayerService& operator=(const PlayerService&) = delete;

    // 单例访问
    static PlayerService& getInstance();

    // 初始化 PlayerService
    void initialize();
    
    // 关闭 PlayerService
    void shutdown();
    
    // 玩家注册
    void registerPlayer(const std::string& name);
private:
    PlayerService();
    ~PlayerService();
};

#endif // PLAYER_SERVICE_H