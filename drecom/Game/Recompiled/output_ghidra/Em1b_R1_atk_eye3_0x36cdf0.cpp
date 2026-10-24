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

// Function: Em1b_R1_atk_eye3
// Address: 0x36cdf0 - 0x36cf20
void Em1b_R1_atk_eye3_0x36cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_eye3_0x36cdf0");
#endif

    switch (ctx->pc) {
        case 0x36ce58u: goto label_36ce58;
        case 0x36ce98u: goto label_36ce98;
        case 0x36cea8u: goto label_36cea8;
        case 0x36ceb4u: goto label_36ceb4;
        case 0x36cec4u: goto label_36cec4;
        case 0x36ced0u: goto label_36ced0;
        default: break;
    }

    ctx->pc = 0x36cdf0u;

    // 0x36cdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36cdf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36cdf8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36cdfc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36ce00: 0x2463b2e0  addiu       $v1, $v1, -0x4D20
    ctx->pc = 0x36ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947552));
    // 0x36ce04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ce08: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36ce08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB2E0u));
    // 0x36ce0c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36ce10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce14: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36ce14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ce18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36ce18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36ce1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ce20: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36CE20u;
    {
        const bool branch_taken_0x36ce20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36ce20) {
            ctx->pc = 0x36CE68u;
            goto label_36ce68;
        }
    }
    ctx->pc = 0x36CE28u;
    // 0x36ce28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CE28u;
    {
        const bool branch_taken_0x36ce28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ce28) {
            ctx->pc = 0x36CE38u;
            goto label_36ce38;
        }
    }
    ctx->pc = 0x36CE30u;
    // 0x36ce30: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x36CE30u;
    {
        const bool branch_taken_0x36ce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ce30) {
            ctx->pc = 0x36CF10u;
            goto label_36cf10;
        }
    }
    ctx->pc = 0x36CE38u;
label_36ce38:
    // 0x36ce38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ce44: 0x24065a0c  addiu       $a2, $zero, 0x5A0C
    ctx->pc = 0x36ce44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23052));
    // 0x36ce48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ce4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ce4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ce50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36CE50u;
    SET_GPR_U32(ctx, 31, 0x36CE58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36CE50u, 0x36CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE58u;
label_36ce58:
    // 0x36ce58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce5c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36ce5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ce60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ce64: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36ce64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36ce68:
    // 0x36ce68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce6c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36ce6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36ce70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ce74: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36ce78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CE78u;
    {
        const bool branch_taken_0x36ce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ce78) {
            ctx->pc = 0x36CE98u;
            goto label_36ce98;
        }
    }
    ctx->pc = 0x36CE80u;
    // 0x36ce80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ce88: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ce88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ce8c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x36ce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ce90: 0xc0c6cd4  jal         func_31B350
    ctx->pc = 0x36CE90u;
    SET_GPR_U32(ctx, 31, 0x36CE98u);
    ctx->pc = 0x31B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B350u, 0x36CE90u, 0x36CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE98u;
label_36ce98:
    // 0x36ce98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ce9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cea0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36CEA0u;
    SET_GPR_U32(ctx, 31, 0x36CEA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36CEA0u, 0x36CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEA8u;
label_36cea8:
    // 0x36cea8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ceac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36CEACu;
    SET_GPR_U32(ctx, 31, 0x36CEB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36CEACu, 0x36CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEB4u;
label_36ceb4:
    // 0x36ceb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ceb8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36cebc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36CEBCu;
    SET_GPR_U32(ctx, 31, 0x36CEC4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36CEBCu, 0x36CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEC4u;
label_36cec4:
    // 0x36cec4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cec8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36CEC8u;
    SET_GPR_U32(ctx, 31, 0x36CED0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36CEC8u, 0x36CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CED0u;
label_36ced0:
    // 0x36ced0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ced4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36ced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36ced8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36CED8u;
    {
        const bool branch_taken_0x36ced8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ced8) {
            ctx->pc = 0x36CF10u;
            goto label_36cf10;
        }
    }
    ctx->pc = 0x36CEE0u;
    // 0x36cee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cee8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36cee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ceec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36cef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cef4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36cef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cefc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36cefcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cf00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cf04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36cf04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cf08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cf0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36cf10:
    // 0x36cf10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36cf10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cf14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36cf14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36cf18: 0x3e00008  jr          $ra
    ctx->pc = 0x36CF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CF20u;
}
