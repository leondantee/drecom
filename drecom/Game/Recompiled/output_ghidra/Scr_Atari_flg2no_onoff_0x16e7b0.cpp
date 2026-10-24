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

// Function: Scr_Atari_flg2no_onoff
// Address: 0x16e7b0 - 0x16e824
void Scr_Atari_flg2no_onoff_0x16e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_Atari_flg2no_onoff_0x16e7b0");
#endif

    switch (ctx->pc) {
        case 0x16e80cu: goto label_16e80c;
        default: break;
    }

    ctx->pc = 0x16e7b0u;

    // 0x16e7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e7b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x16e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x16e7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16e7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e7c0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x16e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x16e7c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x16e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x16e7c8: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x16e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x16e7cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e7d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E7D0u;
    {
        const bool branch_taken_0x16e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e7d0) {
            ctx->pc = 0x16E7E8u;
            goto label_16e7e8;
        }
    }
    ctx->pc = 0x16E7D8u;
    // 0x16e7d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16e7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16e7dc: 0x8c30fdf8  lw          $s0, -0x208($at)
    ctx->pc = 0x16e7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x16e7e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E7E0u;
    {
        const bool branch_taken_0x16e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e7e0) {
            ctx->pc = 0x16E7F4u;
            goto label_16e7f4;
        }
    }
    ctx->pc = 0x16E7E8u;
label_16e7e8:
    // 0x16e7e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16e7ec: 0x8c300df0  lw          $s0, 0xDF0($at)
    ctx->pc = 0x16e7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DF0u));
    // 0x16e7f0: 0x0  nop
    ctx->pc = 0x16e7f0u;
    // NOP
label_16e7f4:
    // 0x16e7f4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16e7f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x16e7f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16e7fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x16e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e800: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x16e800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16e804: 0xc05ba0c  jal         func_16E830
    ctx->pc = 0x16E804u;
    SET_GPR_U32(ctx, 31, 0x16E80Cu);
    ctx->pc = 0x16E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E830u, 0x16E804u, 0x16E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E80Cu;
label_16e80c:
    // 0x16e80c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x16e80cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e818: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e81c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E824u;
}
