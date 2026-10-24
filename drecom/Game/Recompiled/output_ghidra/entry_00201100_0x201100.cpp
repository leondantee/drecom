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

// Function: entry_00201100
// Address: 0x201100 - 0x201154
void entry_00201100_0x201100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201100_0x201100");
#endif

    switch (ctx->pc) {
        case 0x20112cu: goto label_20112c;
        default: break;
    }

    ctx->pc = 0x201100u;

    // 0x201100: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201104: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x201104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x201108: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20110c: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x20110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x201110: 0x34421415  ori         $v0, $v0, 0x1415
    ctx->pc = 0x201110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5141);
    // 0x201114: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201118: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20111c: 0x24450d08  addiu       $a1, $v0, 0xD08
    ctx->pc = 0x20111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3336));
    // 0x201120: 0x8cc600cc  lw          $a2, 0xCC($a2)
    ctx->pc = 0x201120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x201124: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201124u;
    SET_GPR_U32(ctx, 31, 0x20112Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201124u, 0x20112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20112Cu;
label_20112c:
    // 0x20112c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x20112cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x201130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20113c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20113cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201148: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x201148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20114c: 0x3e00008  jr          $ra
    ctx->pc = 0x20114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201154u;
}
