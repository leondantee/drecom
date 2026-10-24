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

// Function: e2d_id49_type10
// Address: 0x2b62b0 - 0x2b6348
void e2d_id49_type10_0x2b62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type10_0x2b62b0");
#endif

    ctx->pc = 0x2b62b0u;

    // 0x2b62b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b62b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b62b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b62bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b62bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b62c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62c4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b62c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b62c8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b62cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b62ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b62d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62d4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b62d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b62d8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b62dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b62dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b62e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b62e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b62e8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b62ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b62ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b62f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b62f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b62f8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b62fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b62fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6300: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6304: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6308: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b630c: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b630cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6314: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6318: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b6318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b631c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6320: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6324: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b6324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6328: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2b632c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b632cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b6330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6334: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6338: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b6338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b633c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b633cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6340: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6348u;
}
