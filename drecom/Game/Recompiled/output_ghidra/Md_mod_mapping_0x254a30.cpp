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

// Function: Md_mod_mapping
// Address: 0x254a30 - 0x254b2c
void Md_mod_mapping_0x254a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_mod_mapping_0x254a30");
#endif

    switch (ctx->pc) {
        case 0x254a80u: goto label_254a80;
        case 0x254aa0u: goto label_254aa0;
        default: break;
    }

    ctx->pc = 0x254a30u;

    // 0x254a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254a34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x254a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x254a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x254a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254a44: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x254a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x254a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x254a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x254a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a50: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x254a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x254a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x254a5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254a60: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x254a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x254a64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x254a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a68: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x254a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x254a6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x254a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x254a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254a74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254a78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x254a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x254a7c: 0x2439821  addu        $s3, $s2, $v1
    ctx->pc = 0x254a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_254a80:
    // 0x254a80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x254a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254a8c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x254a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x254a90: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x254a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x254a94: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x254a94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254a98: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x254a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254a9c: 0x0  nop
    ctx->pc = 0x254a9cu;
    // NOP
label_254aa0:
    // 0x254aa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254aa4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x254aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x254aa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254aac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x254aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x254ab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254ab4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x254ab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254abc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x254abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x254ac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254ac4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x254ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x254ac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254acc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x254accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x254ad0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254ad4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x254ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x254ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254adc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x254adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x254ae0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254ae4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x254ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x254ae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254aec: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x254aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x254af0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x254af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x254af4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x254af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x254af8: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x254AF8u;
    {
        const bool branch_taken_0x254af8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x254af8) {
            ctx->pc = 0x254AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254aa0;
        }
    }
    ctx->pc = 0x254B00u;
    // 0x254b00: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x254b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x254b04: 0x253182b  sltu        $v1, $s2, $s3
    ctx->pc = 0x254b04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x254b08: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x254B08u;
    {
        const bool branch_taken_0x254b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b08) {
            ctx->pc = 0x254A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254a80;
        }
    }
    ctx->pc = 0x254B10u;
    // 0x254b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x254b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254b20: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x254b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x254b24: 0x3e00008  jr          $ra
    ctx->pc = 0x254B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B2Cu;
}
