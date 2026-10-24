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

// Function: entry_00215510
// Address: 0x215510 - 0x215518
void entry_00215510_0x215510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215510_0x215510");
#endif

    ctx->pc = 0x215510u;

    // 0x215510: 0xc0853c0  jal         func_214F00
    ctx->pc = 0x215510u;
    SET_GPR_U32(ctx, 31, 0x215518u);
    ctx->pc = 0x214F00u;
    {
        ctx->pc = 0x215518u;
        ps2_stubs::sceSifExitCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215518u) { return; }
    ctx->pc = 0x215518u;
}
