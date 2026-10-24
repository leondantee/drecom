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

// Function: Em1d_R1_br_mv01
// Address: 0x36feb0 - 0x36ffec
void Em1d_R1_br_mv01_0x36feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_br_mv01_0x36feb0");
#endif

    switch (ctx->pc) {
        case 0x36ff08u: goto label_36ff08;
        case 0x36ff48u: goto label_36ff48;
        case 0x36ff98u: goto label_36ff98;
        case 0x36ffa0u: goto label_36ffa0;
        default: break;
    }

    ctx->pc = 0x36feb0u;

    // 0x36feb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36feb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x36feb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x36feb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36febc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36fec0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x36fec4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x36fec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x36fec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36fecc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36feccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36fed0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36fed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36fed4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x36fed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x36fed8: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x36FED8u;
    {
        const bool branch_taken_0x36fed8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36fed8) {
            ctx->pc = 0x36FFD8u;
            goto label_36ffd8;
        }
    }
    ctx->pc = 0x36FEE0u;
    // 0x36fee0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36fee4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36fee8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36fee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36feec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36feecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36fef0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36fef4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x36fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x36fef8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x36fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36fefc: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x36fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x36ff00: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x36FF00u;
    SET_GPR_U32(ctx, 31, 0x36FF08u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x36FF00u, 0x36FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF08u;
label_36ff08:
    // 0x36ff08: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x36FF08u;
    {
        const bool branch_taken_0x36ff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ff08) {
            ctx->pc = 0x36FFD8u;
            goto label_36ffd8;
        }
    }
    ctx->pc = 0x36FF10u;
    // 0x36ff10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ff14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff18: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x36ff18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ff1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ff20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff24: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x36ff24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ff28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff2c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36ff2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ff30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff34: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36ff34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ff38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36ff40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x36FF40u;
    SET_GPR_U32(ctx, 31, 0x36FF48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x36FF40u, 0x36FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF48u;
label_36ff48:
    // 0x36ff48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36ff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ff4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x36ff4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x36ff50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x36FF50u;
    {
        const bool branch_taken_0x36ff50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ff50) {
            ctx->pc = 0x36FF90u;
            goto label_36ff90;
        }
    }
    ctx->pc = 0x36FF58u;
    // 0x36ff58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ff5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36ff60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ff64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ff68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff6c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36ff6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ff70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36ff74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ff78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff7c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36ff7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ff80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ff84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36ff88: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x36FF88u;
    {
        const bool branch_taken_0x36ff88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ff88) {
            ctx->pc = 0x36FFD8u;
            goto label_36ffd8;
        }
    }
    ctx->pc = 0x36FF90u;
label_36ff90:
    // 0x36ff90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x36FF90u;
    SET_GPR_U32(ctx, 31, 0x36FF98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x36FF90u, 0x36FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF98u;
label_36ff98:
    // 0x36ff98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36ff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ff9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x36ff9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_36ffa0:
    // 0x36ffa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36FFA0u;
    {
        const bool branch_taken_0x36ffa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ffa0) {
            ctx->pc = 0x36FFD8u;
            goto label_36ffd8;
        }
    }
    ctx->pc = 0x36FFA8u;
    // 0x36ffa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ffac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36ffb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ffb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ffb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffbc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36ffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ffc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffc4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36ffc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ffc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffcc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36ffccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ffd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffd4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36ffd8:
    // 0x36ffd8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36ffd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ffdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ffdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ffe0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36ffe4: 0x3e00008  jr          $ra
    ctx->pc = 0x36FFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FFECu;
}
