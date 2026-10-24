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

// Function: entry_00254aa0
// Address: 0x254aa0 - 0x254b2c
void entry_00254aa0_0x254aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254aa0_0x254aa0");
#endif

    ctx->pc = 0x254aa0u;

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
            return;
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
