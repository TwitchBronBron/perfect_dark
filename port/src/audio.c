#include <PR/ultratypes.h>
#include <stdio.h>
#include <SDL.h>
#include "audio.h"

#define SAMPLES_HIGH 736
#define SAMPLES_LOW 720

static SDL_AudioDeviceID dev;
static const s16 *nextBuf;
static u32 nextSize = 0;

s32 audioInit(void)
{
	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
		fprintf(stderr, "SDL audio init error: %s\n", SDL_GetError());
		return -1;
	}

	SDL_AudioSpec want, have;
	SDL_zero(want);
	want.freq = 22020;
	want.format = AUDIO_S16SYS;
	want.channels = 2;
	want.samples = 512;
	want.callback = NULL;

	nextBuf = NULL;

	dev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
	if (dev == 0) {
		fprintf(stderr, "SDL_OpenAudio error: %s\n", SDL_GetError());
		return -1;
	}

	SDL_PauseAudioDevice(dev, 0);

	return 0;
}

s32 audioGetBytesBuffered(void)
{
	return SDL_GetQueuedAudioSize(dev);
}

void audioSetNextBuffer(const s16 *buf, u32 len)
{
	nextBuf = buf;
	nextSize = len;
}

void audioEndFrame(void)
{
	if (nextBuf && nextSize) {
		SDL_QueueAudio(dev, nextBuf, nextSize);
		nextBuf = NULL;
		nextSize = 0;
	}
}
