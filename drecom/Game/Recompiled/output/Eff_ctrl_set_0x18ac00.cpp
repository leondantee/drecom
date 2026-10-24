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

// Function: Eff_ctrl_set
// Address: 0x18ac00 - 0x18acf4
void Eff_ctrl_set_0x18ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_ctrl_set_0x18ac00");
#endif

    switch (ctx->pc) {
        case 0x18ac78u: goto label_18ac78;
        default: break;
    }

    ctx->pc = 0x18ac00u;

    // 0x18ac00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18ac04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ac08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ac0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ac10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ac14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ac18: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x18ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x18ac1c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x18ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18ac20: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x18ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x18ac24: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18ac28: 0x2473a630  addiu       $s3, $v1, -0x59D0
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x18ac2c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A630u));
    // 0x18ac30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18ac34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac38: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ac3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18ac40: 0x2463a6c0  addiu       $v1, $v1, -0x5940
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944448));
    // 0x18ac44: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x18ac44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18ac4c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x18ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x18ac50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x18ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18ac54: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x18ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x18ac58: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac5c: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x18ac5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ac60: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18ac68: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x18ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x18ac6c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18ac6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18ac70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18AC70u;
    {
        const bool branch_taken_0x18ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac70) {
            ctx->pc = 0x18ACC8u;
            goto label_18acc8;
        }
    }
    ctx->pc = 0x18AC78u;
label_18ac78:
    // 0x18ac78: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x18ac78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac7c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x18ac7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ac80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18ac80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18ac84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x18ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18ac88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18ac8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x18ac90: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18ac98: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x18ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x18ac9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aca0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x18aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x18aca4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18acac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18acb0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x18acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x18acb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18acb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18acbc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x18acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x18acc0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x18acc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x18acc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18acc8:
    // 0x18acc8: 0x254182b  sltu        $v1, $s2, $s4
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x18accc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18AC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ac78;
        }
    }
    ctx->pc = 0x18ACD4u;
    // 0x18acd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18acd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18acd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18acd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18acdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18acdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ace0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ace0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ace4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ace4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ace8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18acec: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ACF4u;
}
