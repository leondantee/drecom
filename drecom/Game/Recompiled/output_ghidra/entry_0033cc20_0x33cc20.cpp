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

// Function: entry_0033cc20
// Address: 0x33cc20 - 0x33cc5c
void entry_0033cc20_0x33cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cc20_0x33cc20");
#endif

    switch (ctx->pc) {
        case 0x33cc30u: goto label_33cc30;
        default: break;
    }

    ctx->pc = 0x33cc20u;

    // 0x33cc20: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x33CC20u;
    {
        const bool branch_taken_0x33cc20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cc20) {
            ctx->pc = 0x33CC5Cu;
            return;
        }
    }
    ctx->pc = 0x33CC28u;
    // 0x33cc28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x33CC28u;
    SET_GPR_U32(ctx, 31, 0x33CC30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x33CC28u, 0x33CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC30u;
label_33cc30:
    // 0x33cc30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33cc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33cc34: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cc38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cc3c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33cc3cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33cc40: 0x0  nop
    ctx->pc = 0x33cc40u;
    // NOP
    // 0x33cc44: 0x0  nop
    ctx->pc = 0x33cc44u;
    // NOP
    // 0x33cc48: 0x1010  mfhi        $v0
    ctx->pc = 0x33cc48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33cc4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33cc50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33cc50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33cc54: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33cc54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33cc58: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33cc58u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    ctx->pc = 0x33cc5cu;
}
