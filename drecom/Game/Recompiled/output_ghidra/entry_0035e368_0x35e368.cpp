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

// Function: entry_0035e368
// Address: 0x35e368 - 0x35e3a0
void entry_0035e368_0x35e368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e368_0x35e368");
#endif

    switch (ctx->pc) {
        case 0x35e398u: goto label_35e398;
        default: break;
    }

    ctx->pc = 0x35e368u;

    // 0x35e368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e36c: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x35e36cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x35e370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35e374: 0x304208f0  andi        $v0, $v0, 0x8F0
    ctx->pc = 0x35e374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
    // 0x35e378: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E378u;
    {
        const bool branch_taken_0x35e378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e378) {
            ctx->pc = 0x35E3A0u;
            return;
        }
    }
    ctx->pc = 0x35E380u;
    // 0x35e380: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35e384: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e388: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e38c: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35e390: 0xc076560  jal         func_1D9580
    ctx->pc = 0x35E390u;
    SET_GPR_U32(ctx, 31, 0x35E398u);
    ctx->pc = 0x1D9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9580u, 0x35E390u, 0x35E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E398u;
label_35e398:
    // 0x35e398: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35E398u;
    {
        const bool branch_taken_0x35e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e398) {
            ctx->pc = 0x35E3FCu;
            return;
        }
    }
    ctx->pc = 0x35E3A0u;
}
