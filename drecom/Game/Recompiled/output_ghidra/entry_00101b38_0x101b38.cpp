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

// Function: entry_00101b38
// Address: 0x101b38 - 0x101b3c
void entry_00101b38_0x101b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101b38_0x101b38");
#endif

    ctx->pc = 0x101b38u;

    // 0x101b38: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x101b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
    ctx->pc = 0x101b3cu;
}
