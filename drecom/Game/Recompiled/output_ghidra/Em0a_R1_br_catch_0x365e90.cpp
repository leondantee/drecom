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

// Function: Em0a_R1_br_catch
// Address: 0x365e90 - 0x365fc8
void Em0a_R1_br_catch_0x365e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_br_catch_0x365e90");
#endif

    switch (ctx->pc) {
        case 0x365f1cu: goto label_365f1c;
        default: break;
    }

    ctx->pc = 0x365e90u;

    // 0x365e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365e94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x365e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x365e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365e9c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x365e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x365ea0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x365ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x365ea4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x365ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x365ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365eac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365eb0: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x365EB0u;
    {
        const bool branch_taken_0x365eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365eb0) {
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365EB8u;
    // 0x365eb8: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x365eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x365ebc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x365ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x365ec0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x365ec0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x365ec4: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x365ec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x365ec8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x365EC8u;
    {
        const bool branch_taken_0x365ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x365ec8) {
            ctx->pc = 0x365F14u;
            goto label_365f14;
        }
    }
    ctx->pc = 0x365ED0u;
    // 0x365ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365ed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365edc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x365edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x365ee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365ee8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365ef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365ef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x365f00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x365f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365f04: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x365f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365f08: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x365f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f0c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x365F0Cu;
    {
        const bool branch_taken_0x365f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f0c) {
            ctx->pc = 0x365FACu;
            goto label_365fac;
        }
    }
    ctx->pc = 0x365F14u;
label_365f14:
    // 0x365f14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x365F14u;
    SET_GPR_U32(ctx, 31, 0x365F1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x365F14u, 0x365F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F1Cu;
label_365f1c:
    // 0x365f1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x365f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365f20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x365f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x365f24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x365F24u;
    {
        const bool branch_taken_0x365f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f24) {
            ctx->pc = 0x365F70u;
            goto label_365f70;
        }
    }
    ctx->pc = 0x365F2Cu;
    // 0x365f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f38: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x365f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x365f3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x365f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f60: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x365f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365f64: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x365f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x365F68u;
    {
        const bool branch_taken_0x365f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f68) {
            ctx->pc = 0x365FACu;
            goto label_365fac;
        }
    }
    ctx->pc = 0x365F70u;
label_365f70:
    // 0x365f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x365f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x365f80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x365fa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365fa4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x365fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365fa8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x365fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_365fac:
    // 0x365fac: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x365FACu;
    {
        const bool branch_taken_0x365fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fac) {
            ctx->pc = 0x365FB4u;
            goto label_365fb4;
        }
    }
    ctx->pc = 0x365FB4u;
label_365fb4:
    // 0x365fb4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x365fb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365fbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x365fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x365fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x365FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365FC8u;
}
