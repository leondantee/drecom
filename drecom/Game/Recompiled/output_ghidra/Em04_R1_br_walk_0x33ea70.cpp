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

// Function: Em04_R1_br_walk
// Address: 0x33ea70 - 0x33eae0
void Em04_R1_br_walk_0x33ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_R1_br_walk_0x33ea70");
#endif

    ctx->pc = 0x33ea70u;

    // 0x33ea70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ea74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x33ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x33ea78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x33ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ea7c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x33ea7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x33ea80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ea80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ea84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33ea84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33ea88: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33EA88u;
    {
        const bool branch_taken_0x33ea88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ea88) {
            ctx->pc = 0x33EAD4u;
            goto label_33ead4;
        }
    }
    ctx->pc = 0x33EA90u;
    // 0x33ea90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x33ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ea94: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x33ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ea98: 0x3c034583  lui         $v1, 0x4583
    ctx->pc = 0x33ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17795 << 16));
    // 0x33ea9c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x33ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x33eaa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33eaa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33eaa4: 0x0  nop
    ctx->pc = 0x33eaa4u;
    // NOP
    // 0x33eaa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33eaa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33eaac: 0x0  nop
    ctx->pc = 0x33eaacu;
    // NOP
    // 0x33eab0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x33EAB0u;
    {
        const bool branch_taken_0x33eab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33eab0) {
            ctx->pc = 0x33EAD4u;
            goto label_33ead4;
        }
    }
    ctx->pc = 0x33EAB8u;
    // 0x33eab8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33eabc: 0x24649f70  addiu       $a0, $v1, -0x6090
    ctx->pc = 0x33eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942576));
    // 0x33eac0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x33eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33eac4: 0xac641250  sw          $a0, 0x1250($v1)
    ctx->pc = 0x33eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 4));
    // 0x33eac8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33eacc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x33eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ead0: 0xac641360  sw          $a0, 0x1360($v1)
    ctx->pc = 0x33ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 4));
label_33ead4:
    // 0x33ead4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33ead4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33ead8: 0x3e00008  jr          $ra
    ctx->pc = 0x33EAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EAE0u;
}
