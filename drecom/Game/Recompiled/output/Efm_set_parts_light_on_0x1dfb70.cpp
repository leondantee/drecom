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

// Function: Efm_set_parts_light_on
// Address: 0x1dfb70 - 0x1dfc14
void Efm_set_parts_light_on_0x1dfb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_parts_light_on_0x1dfb70");
#endif

    switch (ctx->pc) {
        case 0x1dfb94u: goto label_1dfb94;
        case 0x1dfbccu: goto label_1dfbcc;
        case 0x1dfbdcu: goto label_1dfbdc;
        default: break;
    }

    ctx->pc = 0x1dfb70u;

    // 0x1dfb70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dfb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dfb74: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1dfb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dfb78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dfb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfb7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfb80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfb84: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1dfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1dfb88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dfb8c: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dfb90: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1dfb90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dfb94:
    // 0x1dfb94: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1dfb94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfb98: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1dfb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1dfb9c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1dfb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dfba0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dfba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1dfba4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dfba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dfba8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dfbac: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1dfbacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1dfbb0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dfbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dfbb4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1dfbb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dfbb8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DFBB8u;
    {
        const bool branch_taken_0x1dfbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbb8) {
            ctx->pc = 0x1DFB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfb94;
        }
    }
    ctx->pc = 0x1DFBC0u;
    // 0x1dfbc0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dfbc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dfbc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFBC4u;
    {
        const bool branch_taken_0x1dfbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbc4) {
            ctx->pc = 0x1DFBE8u;
            goto label_1dfbe8;
        }
    }
    ctx->pc = 0x1DFBCCu;
label_1dfbcc:
    // 0x1dfbcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1dfbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dfbd0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1dfbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dfbd4: 0xc077eac  jal         func_1DFAB0
    ctx->pc = 0x1DFBD4u;
    SET_GPR_U32(ctx, 31, 0x1DFBDCu);
    ctx->pc = 0x1DFAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFAB0u, 0x1DFBD4u, 0x1DFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBDCu;
label_1dfbdc:
    // 0x1dfbdc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dfbe0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1dfbe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dfbe4: 0x0  nop
    ctx->pc = 0x1dfbe4u;
    // NOP
label_1dfbe8:
    // 0x1dfbe8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1dfbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1dfbec: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1dfbecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dfbf0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DFBF0u;
    {
        const bool branch_taken_0x1dfbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbf0) {
            ctx->pc = 0x1DFBCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfbcc;
        }
    }
    ctx->pc = 0x1DFBF8u;
    // 0x1dfbf8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1dfbf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfbfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfbfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfc00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfc00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1dfc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dfc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC14u;
}
