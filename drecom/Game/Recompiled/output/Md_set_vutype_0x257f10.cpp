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

// Function: Md_set_vutype
// Address: 0x257f10 - 0x257f74
void Md_set_vutype_0x257f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_vutype_0x257f10");
#endif

    switch (ctx->pc) {
        case 0x257f30u: goto label_257f30;
        case 0x257f44u: goto label_257f44;
        default: break;
    }

    ctx->pc = 0x257f10u;

    // 0x257f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257f14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x257f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x257f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257f1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x257f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x257f20: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x257f20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x257f24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x257f24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257f28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x257F28u;
    {
        const bool branch_taken_0x257f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257f28) {
            ctx->pc = 0x257F50u;
            goto label_257f50;
        }
    }
    ctx->pc = 0x257F30u;
label_257f30:
    // 0x257f30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x257f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257f34: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x257f34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x257f38: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x257f38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x257f3c: 0xc095fe0  jal         func_257F80
    ctx->pc = 0x257F3Cu;
    SET_GPR_U32(ctx, 31, 0x257F44u);
    ctx->pc = 0x257F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F80u, 0x257F3Cu, 0x257F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F44u;
label_257f44:
    // 0x257f44: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x257f48: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x257f48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257f4c: 0x0  nop
    ctx->pc = 0x257f4cu;
    // NOP
label_257f50:
    // 0x257f50: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x257f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x257f54: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x257f54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257f58: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x257F58u;
    {
        const bool branch_taken_0x257f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257f58) {
            ctx->pc = 0x257F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257f30;
        }
    }
    ctx->pc = 0x257F60u;
    // 0x257f60: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x257f60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x257f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x257F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F74u;
}
