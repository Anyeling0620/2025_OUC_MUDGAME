#include "Game.h"
#include "View.h" // 引入视图层的头文件

#include <iostream>
#include <string>

Game::Game() {
    init();
    view_ = std::make_unique<View>(*this);
}

Game::~Game() {
    playerService.shutdown();
}

void Game::run() {
    running = true;
    if (view_) {
        view_->showMainMenu();
    }
}

void Game::init() {
    playerService.initialize();
}

void Game::startNewGame() {
    if (view_) {
        view_->showLoadingScreen("正在加载新游戏");
    }
    std::cout << "开始新游戏..." << std::endl;
    // TODO
    // ... 此处是开始新游戏的具体逻辑 ...
}

void Game::loadGame() {
    std::string saveName = "default";
    if (view_) {
        view_->showLoadingScreen("正在打开存档{" + saveName + "}");
    }
    std::cout << "读取存档..." << std::endl;
    // TODO
    // ... 此处是读取存档的具体逻辑 ...
}

void Game::showGameIntro() {
    std::cout << "游戏介绍..." << std::endl;
    if (view_) {
        view_->showGameIntroScreen();
    }
}

void Game::showGameSettings() {
    std::cout << "游戏设置..." << std::endl;
    // TODO
    // ... 显示设置的具体逻辑 ...
}

void Game::exitGame() {
    running = false;
    std::cout << "退出游戏..." << std::endl;
}