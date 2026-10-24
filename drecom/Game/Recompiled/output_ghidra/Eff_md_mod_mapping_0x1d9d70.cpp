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

// Function: Eff_md_mod_mapping
// Address: 0x1d9d70 - 0x1d9e7c
void Eff_md_mod_mapping_0x1d9d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_mod_mapping_0x1d9d70");
#endif

    switch (ctx->pc) {
        case 0x1d9dc0u: goto label_1d9dc0;
        case 0x1d9de0u: goto label_1d9de0;
        default: break;
    }

    ctx->pc = 0x1d9d70u;

    // 0x1d9d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9d74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d9d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9d84: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1d9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1d9d88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1d9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9d8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d9d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9d90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1d9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9d94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9d98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1d9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d9d9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9da0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1d9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1d9da4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1d9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9da8: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x1d9da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d9dac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1d9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9db0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1d9db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9db4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d9db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d9db8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d9dbc: 0x2439821  addu        $s3, $s2, $v1
    ctx->pc = 0x1d9dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1d9dc0:
    // 0x1d9dc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9dc4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9dcc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1d9dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1d9dd0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1d9dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d9dd4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1d9dd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d9dd8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1d9dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9ddc: 0x0  nop
    ctx->pc = 0x1d9ddcu;
    // NOP
label_1d9de0:
    // 0x1d9de0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9de4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d9de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9dec: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d9decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d9df0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9df4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d9df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d9df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9dfc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1d9dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1d9e00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9e04: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9e08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9e0c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d9e10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9e14: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9e1c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d9e20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9e24: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d9e28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9e2c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1d9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1d9e30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9e34: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d9e38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9e3c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1d9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1d9e40: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d9e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d9e44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d9e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d9e48: 0x1620ffe5  bnez        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D9E48u;
    {
        const bool branch_taken_0x1d9e48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e48) {
            ctx->pc = 0x1D9DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9de0;
        }
    }
    ctx->pc = 0x1D9E50u;
    // 0x1d9e50: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1d9e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d9e54: 0x253182b  sltu        $v1, $s2, $s3
    ctx->pc = 0x1d9e54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d9e58: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D9E58u;
    {
        const bool branch_taken_0x1d9e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e58) {
            ctx->pc = 0x1D9DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9dc0;
        }
    }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d9e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d9e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E7Cu;
}
