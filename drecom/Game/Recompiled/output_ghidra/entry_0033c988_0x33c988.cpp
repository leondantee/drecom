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

// Function: entry_0033c988
// Address: 0x33c988 - 0x33c9cc
void entry_0033c988_0x33c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c988_0x33c988");
#endif

    switch (ctx->pc) {
        case 0x33c998u: goto label_33c998;
        default: break;
    }

    ctx->pc = 0x33c988u;

    // 0x33c988: 0x168000b4  bnez        $s4, . + 4 + (0xB4 << 2)
    ctx->pc = 0x33C988u;
    {
        const bool branch_taken_0x33c988 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c988) {
            ctx->pc = 0x33CC5Cu;
            return;
        }
    }
    ctx->pc = 0x33C990u;
    // 0x33c990: 0xc067694  jal         func_19DA50
    ctx->pc = 0x33C990u;
    SET_GPR_U32(ctx, 31, 0x33C998u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x33C990u, 0x33C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C998u;
label_33c998:
    // 0x33c998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33c998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33c99c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c9a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c9a4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33c9a4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33c9a8: 0x0  nop
    ctx->pc = 0x33c9a8u;
    // NOP
    // 0x33c9ac: 0x0  nop
    ctx->pc = 0x33c9acu;
    // NOP
    // 0x33c9b0: 0x1010  mfhi        $v0
    ctx->pc = 0x33c9b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33c9b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c9b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c9b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c9bc: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c9bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c9c0: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c9c0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c9c4: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x33C9C4u;
    {
        const bool branch_taken_0x33c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9c4) {
            ctx->pc = 0x33CC5Cu;
            return;
        }
    }
    ctx->pc = 0x33C9CCu;
}
