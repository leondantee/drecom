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

// Function: Efm_set_prim
// Address: 0x1dedd0 - 0x1dee34
void Efm_set_prim_0x1dedd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_prim_0x1dedd0");
#endif

    switch (ctx->pc) {
        case 0x1dedf0u: goto label_1dedf0;
        case 0x1dee04u: goto label_1dee04;
        default: break;
    }

    ctx->pc = 0x1dedd0u;

    // 0x1dedd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dedd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dedd4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1dedd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dedd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1deddc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1deddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1dede0: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x1dede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x1dede4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dede4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dede8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEDE8u;
    {
        const bool branch_taken_0x1dede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dede8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DEDF0u;
label_1dedf0:
    // 0x1dedf0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1dedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dedf4: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x1dedf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dedf8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dedf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dedfc: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DEDFCu;
    SET_GPR_U32(ctx, 31, 0x1DEE04u);
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DEDFCu, 0x1DEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEE04u;
label_1dee04:
    // 0x1dee04: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1dee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dee08: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1dee08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dee0c: 0x0  nop
    ctx->pc = 0x1dee0cu;
    // NOP
label_1dee10:
    // 0x1dee10: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1dee10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1dee14: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1dee14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dee18: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DEE18u;
    {
        const bool branch_taken_0x1dee18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dee18) {
            ctx->pc = 0x1DEDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dedf0;
        }
    }
    ctx->pc = 0x1DEE20u;
    // 0x1dee20: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1dee20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dee24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dee28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEE34u;
}
