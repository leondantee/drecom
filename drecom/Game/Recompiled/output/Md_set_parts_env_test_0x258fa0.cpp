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

// Function: Md_set_parts_env_test
// Address: 0x258fa0 - 0x258ff8
void Md_set_parts_env_test_0x258fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_env_test_0x258fa0");
#endif

    switch (ctx->pc) {
        case 0x258fc0u: goto label_258fc0;
        case 0x258fd4u: goto label_258fd4;
        default: break;
    }

    ctx->pc = 0x258fa0u;

    // 0x258fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258fa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x258fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x258fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258fac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258fb0: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x258fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x258fb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258fb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258fb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258FB8u;
    {
        const bool branch_taken_0x258fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258fb8) {
            ctx->pc = 0x258FD8u;
            goto label_258fd8;
        }
    }
    ctx->pc = 0x258FC0u;
label_258fc0:
    // 0x258fc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258fc4: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x258fc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258fc8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258fc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258fcc: 0xc096400  jal         func_259000
    ctx->pc = 0x258FCCu;
    SET_GPR_U32(ctx, 31, 0x258FD4u);
    ctx->pc = 0x259000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259000u, 0x258FCCu, 0x258FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FD4u;
label_258fd4:
    // 0x258fd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258fd8:
    // 0x258fd8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258fdc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258FDCu;
    {
        const bool branch_taken_0x258fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258fdc) {
            ctx->pc = 0x258FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258fc0;
        }
    }
    ctx->pc = 0x258FE4u;
    // 0x258fe4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258fe4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258fec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x258FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258FF8u;
}
