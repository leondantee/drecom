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

// Function: entry_0011a6d8
// Address: 0x11a6d8 - 0x11a6e4
void entry_0011a6d8_0x11a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6d8_0x11a6d8");
#endif

    ctx->pc = 0x11a6d8u;

    // 0x11a6d8: 0x2918023  subu        $s0, $s4, $s1
    ctx->pc = 0x11a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x11a6dc: 0x2b43823  subu        $a3, $s5, $s4
    ctx->pc = 0x11a6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x11a6e0: 0xf32823  subu        $a1, $a3, $s3
    ctx->pc = 0x11a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    ctx->pc = 0x11a6e4u;
}
