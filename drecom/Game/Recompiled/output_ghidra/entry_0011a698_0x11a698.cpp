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

// Function: entry_0011a698
// Address: 0x11a698 - 0x11a6b0
void entry_0011a698_0x11a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a698_0x11a698");
#endif

    ctx->pc = 0x11a698u;

    // 0x11a698: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11a69c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6a0: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a6a4: 0x2918023  subu        $s0, $s4, $s1
    ctx->pc = 0x11a6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x11a6a8: 0x2b43823  subu        $a3, $s5, $s4
    ctx->pc = 0x11a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x11a6ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a6b0u;
}
