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

// Function: Em10_set_soul
// Address: 0x1341f0 - 0x134260
void Em10_set_soul_0x1341f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_soul_0x1341f0");
#endif

    switch (ctx->pc) {
        case 0x134244u: goto label_134244;
        case 0x134250u: goto label_134250;
        default: break;
    }

    ctx->pc = 0x1341f0u;

    // 0x1341f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1341f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1341f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1341f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1341f8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1341f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1341fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x134200: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x134200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x134204: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x134204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134208: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x134208u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3850C0u));
    // 0x13420c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13420cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x134210: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x134210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134214: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x134214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x134218: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x134218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13421c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13421cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x134220: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x134220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x134224: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x134224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x134228: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x134228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13422c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x13422cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x134230: 0x24040c08  addiu       $a0, $zero, 0xC08
    ctx->pc = 0x134230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3080));
    // 0x134234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x134234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x134238: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x134238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13423c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x13423Cu;
    SET_GPR_U32(ctx, 31, 0x134244u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x13423Cu, 0x134244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134244u;
label_134244:
    // 0x134244: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x134244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x134248: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x134248u;
    SET_GPR_U32(ctx, 31, 0x134250u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x134248u, 0x134250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134250u;
label_134250:
    // 0x134250: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x134250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134254: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x134254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134258: 0x3e00008  jr          $ra
    ctx->pc = 0x134258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134260u;
}
