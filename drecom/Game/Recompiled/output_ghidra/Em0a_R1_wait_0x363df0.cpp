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

// Function: Em0a_R1_wait
// Address: 0x363df0 - 0x363efc
void Em0a_R1_wait_0x363df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_wait_0x363df0");
#endif

    switch (ctx->pc) {
        case 0x363e44u: goto label_363e44;
        case 0x363e64u: goto label_363e64;
        case 0x363e70u: goto label_363e70;
        case 0x363e80u: goto label_363e80;
        case 0x363e8cu: goto label_363e8c;
        case 0x363ea4u: goto label_363ea4;
        default: break;
    }

    ctx->pc = 0x363df0u;

    // 0x363df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363df4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x363df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x363df8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x363df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x363dfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x363e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x363e04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x363e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x363e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363e0c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x363E0Cu;
    {
        const bool branch_taken_0x363e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363e0c) {
            ctx->pc = 0x363E54u;
            goto label_363e54;
        }
    }
    ctx->pc = 0x363E14u;
    // 0x363e14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363E14u;
    {
        const bool branch_taken_0x363e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e14) {
            ctx->pc = 0x363E24u;
            goto label_363e24;
        }
    }
    ctx->pc = 0x363E1Cu;
    // 0x363e1c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x363E1Cu;
    {
        const bool branch_taken_0x363e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e1c) {
            ctx->pc = 0x363EECu;
            goto label_363eec;
        }
    }
    ctx->pc = 0x363E24u;
label_363e24:
    // 0x363e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x363e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x363e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x363e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x363e30: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x363e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x363e34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x363e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363e38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x363e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x363e3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x363E3Cu;
    SET_GPR_U32(ctx, 31, 0x363E44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x363E3Cu, 0x363E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E44u;
label_363e44:
    // 0x363e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e48: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x363e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x363e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x363e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x363e50: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x363e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_363e54:
    // 0x363e54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x363e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x363e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x363e5c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x363E5Cu;
    SET_GPR_U32(ctx, 31, 0x363E64u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x363E5Cu, 0x363E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E64u;
label_363e64:
    // 0x363e64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x363e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e68: 0xc05cd10  jal         func_173440
    ctx->pc = 0x363E68u;
    SET_GPR_U32(ctx, 31, 0x363E70u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x363E68u, 0x363E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E70u;
label_363e70:
    // 0x363e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x363e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x363e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x363e78: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x363E78u;
    SET_GPR_U32(ctx, 31, 0x363E80u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x363E78u, 0x363E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E80u;
label_363e80:
    // 0x363e80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x363e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e84: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x363E84u;
    SET_GPR_U32(ctx, 31, 0x363E8Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x363E84u, 0x363E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363E8Cu;
label_363e8c:
    // 0x363e8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x363e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x363e94: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x363E94u;
    {
        const bool branch_taken_0x363e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363e94) {
            ctx->pc = 0x363EECu;
            goto label_363eec;
        }
    }
    ctx->pc = 0x363E9Cu;
    // 0x363e9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363E9Cu;
    SET_GPR_U32(ctx, 31, 0x363EA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363E9Cu, 0x363EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363EA4u;
label_363ea4:
    // 0x363ea4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363ea8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x363ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x363eac: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x363EACu;
    {
        const bool branch_taken_0x363eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363eac) {
            ctx->pc = 0x363EECu;
            goto label_363eec;
        }
    }
    ctx->pc = 0x363EB4u;
    // 0x363eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363eb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363ebc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363ec8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363ed0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363ed4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363ed8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363edc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x363edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363ee0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363ee4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x363EE4u;
    {
        const bool branch_taken_0x363ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363ee4) {
            ctx->pc = 0x363EECu;
            goto label_363eec;
        }
    }
    ctx->pc = 0x363EECu;
label_363eec:
    // 0x363eec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x363eecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363ef0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x363ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x363ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x363EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363EFCu;
}
