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

// Function: Md_set_meisai_rate_all
// Address: 0x2589a0 - 0x2589f8
void Md_set_meisai_rate_all_0x2589a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_meisai_rate_all_0x2589a0");
#endif

    switch (ctx->pc) {
        case 0x2589c0u: goto label_2589c0;
        case 0x2589d4u: goto label_2589d4;
        default: break;
    }

    ctx->pc = 0x2589a0u;

    // 0x2589a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2589a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2589a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2589a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2589a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2589a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2589ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2589acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2589b0: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x2589b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2589b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2589b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2589b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2589B8u;
    {
        const bool branch_taken_0x2589b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2589b8) {
            ctx->pc = 0x2589D8u;
            goto label_2589d8;
        }
    }
    ctx->pc = 0x2589C0u;
label_2589c0:
    // 0x2589c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2589c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2589c4: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2589c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2589c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2589c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2589cc: 0xc096280  jal         func_258A00
    ctx->pc = 0x2589CCu;
    SET_GPR_U32(ctx, 31, 0x2589D4u);
    ctx->pc = 0x258A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A00u, 0x2589CCu, 0x2589D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589D4u;
label_2589d4:
    // 0x2589d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2589d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2589d8:
    // 0x2589d8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x2589d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2589dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2589DCu;
    {
        const bool branch_taken_0x2589dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2589dc) {
            ctx->pc = 0x2589C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2589c0;
        }
    }
    ctx->pc = 0x2589E4u;
    // 0x2589e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2589e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2589e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2589e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2589ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2589ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2589f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2589F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2589F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2589F8u;
}
