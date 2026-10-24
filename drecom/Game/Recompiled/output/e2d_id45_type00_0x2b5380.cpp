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

// Function: e2d_id45_type00
// Address: 0x2b5380 - 0x2b53e0
void e2d_id45_type00_0x2b5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id45_type00_0x2b5380");
#endif

    ctx->pc = 0x2b5380u;

    // 0x2b5380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5384: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b538c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5390: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b5390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5394: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b5394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b5398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b539c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b53a0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b53a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b53a4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b53a8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b53a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b53ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b53acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b53b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b53b4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b53b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b53b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b53bc: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b53bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b53c0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b53c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b53c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b53c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b53c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b53cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b53d0: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b53d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b53d4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b53d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b53d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B53D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B53D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B53E0u;
}
