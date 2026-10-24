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

// Function: entry_0032eb38
// Address: 0x32eb38 - 0x32eb5c
void entry_0032eb38_0x32eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032eb38_0x32eb38");
#endif

    ctx->pc = 0x32eb38u;

    // 0x32eb38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb3c: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb40: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x32eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x32eb44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb48: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB48u;
    {
        const bool branch_taken_0x32eb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb48) {
            ctx->pc = 0x32EB5Cu;
            return;
        }
    }
    ctx->pc = 0x32EB50u;
    // 0x32eb50: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32eb54: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x32eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x32eb58: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
    ctx->pc = 0x32eb5cu;
}
