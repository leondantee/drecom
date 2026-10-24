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

// Function: e2d_id04_type25
// Address: 0x2ae170 - 0x2ae1f0
void e2d_id04_type25_0x2ae170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type25_0x2ae170");
#endif

    ctx->pc = 0x2ae170u;

    // 0x2ae170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae174: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ae174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ae178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ae178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae17c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae180: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ae180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae188: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae18c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ae18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ae190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae194: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae198: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ae198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ae19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae1a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1a4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ae1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ae1a8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2ae1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2ae1ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae1b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1b4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ae1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ae1b8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ae1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ae1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae1c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1c4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ae1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ae1c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae1cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1d0: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ae1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae1d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1d8: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x2ae1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae1dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ae1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ae1e0: 0xa060013a  sb          $zero, 0x13A($v1)
    ctx->pc = 0x2ae1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae1e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ae1e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE1F0u;
}
