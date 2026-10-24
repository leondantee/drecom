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

// Function: Close_eff2d_wk
// Address: 0x18eae0 - 0x18ec14
void Close_eff2d_wk_0x18eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close_eff2d_wk_0x18eae0");
#endif

    ctx->pc = 0x18eae0u;

    // 0x18eae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18eae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18eae8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x18eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18eaec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18eaf0: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18eaf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eaf8: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18eaf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18eafc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18eb00: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x18eb04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB04u;
    {
        const bool branch_taken_0x18eb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb04) {
            ctx->pc = 0x18EB20u;
            goto label_18eb20;
        }
    }
    ctx->pc = 0x18EB0Cu;
    // 0x18eb0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb10: 0x8c430200  lw          $v1, 0x200($v0)
    ctx->pc = 0x18eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x18eb14: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x18eb18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18eb1c: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x18eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
label_18eb20:
    // 0x18eb20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb24: 0xac40020c  sw          $zero, 0x20C($v0)
    ctx->pc = 0x18eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 524), GPR_U32(ctx, 0));
    // 0x18eb28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb2c: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eb30: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18EB30u;
    {
        const bool branch_taken_0x18eb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eb30) {
            ctx->pc = 0x18EB6Cu;
            goto label_18eb6c;
        }
    }
    ctx->pc = 0x18EB38u;
    // 0x18eb38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb3c: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18eb40: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x18eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x18eb44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EB44u;
    {
        const bool branch_taken_0x18eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eb44) {
            ctx->pc = 0x18EB58u;
            goto label_18eb58;
        }
    }
    ctx->pc = 0x18EB4Cu;
    // 0x18eb4c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x18eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x18eb50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EB50u;
    {
        const bool branch_taken_0x18eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb50) {
            ctx->pc = 0x18EBB0u;
            goto label_18ebb0;
        }
    }
    ctx->pc = 0x18EB58u;
label_18eb58:
    // 0x18eb58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb5c: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18eb60: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x18eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
    // 0x18eb64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EB64u;
    {
        const bool branch_taken_0x18eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb64) {
            ctx->pc = 0x18EBB0u;
            goto label_18ebb0;
        }
    }
    ctx->pc = 0x18EB6Cu;
label_18eb6c:
    // 0x18eb6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb70: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18eb74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb78: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eb7c: 0xac430218  sw          $v1, 0x218($v0)
    ctx->pc = 0x18eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 3));
    // 0x18eb80: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB80u;
    {
        const bool branch_taken_0x18eb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eb80) {
            ctx->pc = 0x18EB9Cu;
            goto label_18eb9c;
        }
    }
    ctx->pc = 0x18EB88u;
    // 0x18eb88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eb8c: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eb90: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x18eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x18eb94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB94u;
    {
        const bool branch_taken_0x18eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb94) {
            ctx->pc = 0x18EBB0u;
            goto label_18ebb0;
        }
    }
    ctx->pc = 0x18EB9Cu;
label_18eb9c:
    // 0x18eb9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eba0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18eba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eba8: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ebac: 0xac430214  sw          $v1, 0x214($v0)
    ctx->pc = 0x18ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 3));
label_18ebb0:
    // 0x18ebb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebb4: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x18ebb8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x18ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18ebbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EBBCu;
    {
        const bool branch_taken_0x18ebbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ebbc) {
            ctx->pc = 0x18EBDCu;
            goto label_18ebdc;
        }
    }
    ctx->pc = 0x18EBC4u;
    // 0x18ebc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebc8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x18ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x18ebcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebd0: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x18ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x18ebd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EBD4u;
    {
        const bool branch_taken_0x18ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebd4) {
            ctx->pc = 0x18EBF4u;
            goto label_18ebf4;
        }
    }
    ctx->pc = 0x18EBDCu;
label_18ebdc:
    // 0x18ebdc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x18ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18ebe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebe4: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x18ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x18ebe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18ebf0: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x18ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
label_18ebf4:
    // 0x18ebf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebf8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x18ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x18ebfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ec00: 0x8c420218  lw          $v0, 0x218($v0)
    ctx->pc = 0x18ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x18ec04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ec04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ec08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC14u;
}
