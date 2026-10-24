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

// Function: Close_ray_wk
// Address: 0x18ec20 - 0x18ed28
void Close_ray_wk_0x18ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close_ray_wk_0x18ec20");
#endif

    ctx->pc = 0x18ec20u;

    // 0x18ec20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ec24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ec28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x18ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18ec2c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18ec30: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18ec30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18ec34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec38: 0xac40020c  sw          $zero, 0x20C($v0)
    ctx->pc = 0x18ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 524), GPR_U32(ctx, 0));
    // 0x18ec3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec40: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18ec44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18EC44u;
    {
        const bool branch_taken_0x18ec44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec44) {
            ctx->pc = 0x18EC80u;
            goto label_18ec80;
        }
    }
    ctx->pc = 0x18EC4Cu;
    // 0x18ec4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec50: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ec54: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x18ec54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x18ec58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EC58u;
    {
        const bool branch_taken_0x18ec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec58) {
            ctx->pc = 0x18EC6Cu;
            goto label_18ec6c;
        }
    }
    ctx->pc = 0x18EC60u;
    // 0x18ec60: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x18ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x18ec64: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EC64u;
    {
        const bool branch_taken_0x18ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec64) {
            ctx->pc = 0x18ECC4u;
            goto label_18ecc4;
        }
    }
    ctx->pc = 0x18EC6Cu;
label_18ec6c:
    // 0x18ec6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec70: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ec74: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x18ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
    // 0x18ec78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EC78u;
    {
        const bool branch_taken_0x18ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec78) {
            ctx->pc = 0x18ECC4u;
            goto label_18ecc4;
        }
    }
    ctx->pc = 0x18EC80u;
label_18ec80:
    // 0x18ec80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec84: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ec88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec8c: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18ec90: 0xac430218  sw          $v1, 0x218($v0)
    ctx->pc = 0x18ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 3));
    // 0x18ec94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC94u;
    {
        const bool branch_taken_0x18ec94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec94) {
            ctx->pc = 0x18ECB0u;
            goto label_18ecb0;
        }
    }
    ctx->pc = 0x18EC9Cu;
    // 0x18ec9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eca0: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eca4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x18eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x18eca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18ECA8u;
    {
        const bool branch_taken_0x18eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eca8) {
            ctx->pc = 0x18ECC4u;
            goto label_18ecc4;
        }
    }
    ctx->pc = 0x18ECB0u;
label_18ecb0:
    // 0x18ecb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecb4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18ecb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecbc: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ecc0: 0xac430214  sw          $v1, 0x214($v0)
    ctx->pc = 0x18ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 3));
label_18ecc4:
    // 0x18ecc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecc8: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x18eccc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18ecd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ECD0u;
    {
        const bool branch_taken_0x18ecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ecd0) {
            ctx->pc = 0x18ECF0u;
            goto label_18ecf0;
        }
    }
    ctx->pc = 0x18ECD8u;
    // 0x18ecd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecdc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x18ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x18ece0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ece4: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x18ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x18ece8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18ECE8u;
    {
        const bool branch_taken_0x18ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ece8) {
            ctx->pc = 0x18ED08u;
            goto label_18ed08;
        }
    }
    ctx->pc = 0x18ECF0u;
label_18ecf0:
    // 0x18ecf0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18ecf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecf8: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x18ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x18ecfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed00: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x18ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18ed04: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x18ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
label_18ed08:
    // 0x18ed08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed0c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x18ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x18ed10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed14: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ed18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ed18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ed1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ed20: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ED20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ED28u;
}
