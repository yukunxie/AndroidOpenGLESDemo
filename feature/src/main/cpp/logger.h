//
// Created by realxie on 2018/9/4.
//

#ifndef ANDROIDOPENGLES_LOGGER_H
#define ANDROIDOPENGLES_LOGGER_H

#include <strings.h>
#include <android/log.h>

#define LOG_INFO(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOG_ERROR(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif //ANDROIDOPENGLES_LOGGER_H
