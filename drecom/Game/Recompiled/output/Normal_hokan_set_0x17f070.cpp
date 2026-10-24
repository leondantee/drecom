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

// Function: Normal_hokan_set
// Address: 0x17f070 - 0x17f10c
void Normal_hokan_set_0x17f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Normal_hokan_set_0x17f070");
#endif

    switch (ctx->pc) {
        case 0x17f0b0u: goto label_17f0b0;
        case 0x17f0f8u: goto label_17f0f8;
        default: break;
    }

    ctx->pc = 0x17f070u;

    // 0x17f070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f074: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17f074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17f078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f07c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17f080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f084: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x17f084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x17f088: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17F088u;
    {
        const bool branch_taken_0x17f088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f088) {
            ctx->pc = 0x17F0B8u;
            goto label_17f0b8;
        }
    }
    ctx->pc = 0x17F090u;
    // 0x17f090: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17f090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f094: 0xac6000fc  sw          $zero, 0xFC($v1)
    ctx->pc = 0x17f094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 0));
    // 0x17f098: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f09c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f0a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17f0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f0a8: 0xc05f8d4  jal         func_17E350
    ctx->pc = 0x17F0A8u;
    SET_GPR_U32(ctx, 31, 0x17F0B0u);
    ctx->pc = 0x17E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E350u, 0x17F0A8u, 0x17F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0B0u;
label_17f0b0:
    // 0x17f0b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F0B0u;
    {
        const bool branch_taken_0x17f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0b0) {
            ctx->pc = 0x17F0F8u;
            goto label_17f0f8;
        }
    }
    ctx->pc = 0x17F0B8u;
label_17f0b8:
    // 0x17f0b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f0bc: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x17f0c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F0C0u;
    {
        const bool branch_taken_0x17f0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f0c0) {
            ctx->pc = 0x17F0D4u;
            goto label_17f0d4;
        }
    }
    ctx->pc = 0x17F0C8u;
    // 0x17f0c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17f0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F0CCu;
    {
        const bool branch_taken_0x17f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0cc) {
            ctx->pc = 0x17F0E0u;
            goto label_17f0e0;
        }
    }
    ctx->pc = 0x17F0D4u;
label_17f0d4:
    // 0x17f0d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f0d8: 0x8c7000f0  lw          $s0, 0xF0($v1)
    ctx->pc = 0x17f0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x17f0dc: 0x0  nop
    ctx->pc = 0x17f0dcu;
    // NOP
label_17f0e0:
    // 0x17f0e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f0e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x17f0e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f0e8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x17f0e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f0ec: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x17f0ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17f0f0: 0xc05f8d4  jal         func_17E350
    ctx->pc = 0x17F0F0u;
    SET_GPR_U32(ctx, 31, 0x17F0F8u);
    ctx->pc = 0x17E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E350u, 0x17F0F0u, 0x17F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0F8u;
label_17f0f8:
    // 0x17f0f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17f0f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f100: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f104: 0x3e00008  jr          $ra
    ctx->pc = 0x17F104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F10Cu;
}
