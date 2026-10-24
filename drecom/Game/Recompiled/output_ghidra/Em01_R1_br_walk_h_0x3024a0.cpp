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

// Function: Em01_R1_br_walk_h
// Address: 0x3024a0 - 0x3024fc
void Em01_R1_br_walk_h_0x3024a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_br_walk_h_0x3024a0");
#endif

    ctx->pc = 0x3024a0u;

    // 0x3024a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3024a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3024a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3024a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3024a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3024a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3024ac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3024acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3024b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3024b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3024b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3024b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3024b8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3024B8u;
    {
        const bool branch_taken_0x3024b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3024b8) {
            ctx->pc = 0x3024F0u;
            goto label_3024f0;
        }
    }
    ctx->pc = 0x3024C0u;
    // 0x3024c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3024c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3024c4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3024c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3024c8: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x3024c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x3024cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3024ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3024d0: 0x0  nop
    ctx->pc = 0x3024d0u;
    // NOP
    // 0x3024d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3024d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3024d8: 0x0  nop
    ctx->pc = 0x3024d8u;
    // NOP
    // 0x3024dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3024DCu;
    {
        const bool branch_taken_0x3024dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3024dc) {
            ctx->pc = 0x3024F0u;
            goto label_3024f0;
        }
    }
    ctx->pc = 0x3024E4u;
    // 0x3024e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3024e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3024e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3024e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3024ec: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3024ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_3024f0:
    // 0x3024f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3024f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3024f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3024F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3024F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3024FCu;
}
