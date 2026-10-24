#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017d858
// Address: 0x17d858 - 0x17d85c
void entry_0017d858_0x17d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d858_0x17d858");
#endif

    ctx->pc = 0x17d858u;

    // 0x17d858: 0xac300af0  sw          $s0, 0xAF0($at)
    ctx->pc = 0x17d858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2800), GPR_U32(ctx, 16));
    ctx->pc = 0x17d85cu;
}
