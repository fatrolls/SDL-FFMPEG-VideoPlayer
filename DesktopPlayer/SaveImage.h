#pragma once

//for debug purpuses, dump 1 video frame as an image file
int SaveAsBMP(AVFrame *frame, int Width, int Height, int FrameNumber);
int SaveAsJPEG(AVFrame* frame, const char *FileName, int FrameNumber);
int SaveAsJPEG(unsigned char *YUV, int Width, int Height, const char* FileName, int FrameNumber);
