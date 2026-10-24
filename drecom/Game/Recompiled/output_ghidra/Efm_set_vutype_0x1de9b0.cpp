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

// Function: Efm_set_vutype
// Address: 0x1de9b0 - 0x1dea14
void Efm_set_vutype_0x1de9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_vutype_0x1de9b0");
#endif

    switch (ctx->pc) {
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9e4u: goto label_1de9e4;
        default: break;
    }

    ctx->pc = 0x1de9b0u;

    // 0x1de9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de9b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1de9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1de9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de9bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1de9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1de9c0: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x1de9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x1de9c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1de9c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de9c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE9C8u;
    {
        const bool branch_taken_0x1de9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de9c8) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9D0u;
label_1de9d0:
    // 0x1de9d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1de9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de9d4: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1de9d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de9d8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1de9d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1de9dc: 0xc077a88  jal         func_1DEA20
    ctx->pc = 0x1DE9DCu;
    SET_GPR_U32(ctx, 31, 0x1DE9E4u);
    ctx->pc = 0x1DEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA20u, 0x1DE9DCu, 0x1DE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9E4u;
label_1de9e4:
    // 0x1de9e4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de9e8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1de9e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1de9ec: 0x0  nop
    ctx->pc = 0x1de9ecu;
    // NOP
label_1de9f0:
    // 0x1de9f0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1de9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1de9f4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1de9f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de9f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DE9F8u;
    {
        const bool branch_taken_0x1de9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de9f8) {
            ctx->pc = 0x1DE9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de9d0;
        }
    }
    ctx->pc = 0x1DEA00u;
    // 0x1dea00: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1dea00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dea04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dea0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA14u;
}
