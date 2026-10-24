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

// Function: entry_0011a3b0
// Address: 0x11a3b0 - 0x11a3c8
void entry_0011a3b0_0x11a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3b0_0x11a3b0");
#endif

    ctx->pc = 0x11a3b0u;

    // 0x11a3b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3b8: 0xb303e  dsrl32      $a2, $t3, 0
    ctx->pc = 0x11a3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x11a3bc: 0x934021  addu        $t0, $a0, $s3
    ctx->pc = 0x11a3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11a3c0: 0xb33821  addu        $a3, $a1, $s3
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x11a3c4: 0x0  nop
    ctx->pc = 0x11a3c4u;
    // NOP
    ctx->pc = 0x11a3c8u;
}
