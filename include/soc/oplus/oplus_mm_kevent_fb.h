/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_MM_KEVENT_FB_H
#define _OPLUS_MM_KEVENT_FB_H

#define OPLUS_AUDIO_EVENTID_HEADSET_DET 0
#define OPLUS_AUDIO_EVENTID_ADSP_DAEMON 1
#define OPLUS_AUDIO_EVENTID_ADSP_CRASH 2

#define MM_FB_KEY_RATELIMIT_5MIN 0
#define MM_FB_KEY_RATELIMIT_30MIN 1

static inline void mm_fb_audio_kevent_named(int event_id, int rate_limit, const char *fmt, ...)
{
    (void)event_id;
    (void)rate_limit;
    (void)fmt;
}

#endif /* _OPLUS_MM_KEVENT_FB_H */
