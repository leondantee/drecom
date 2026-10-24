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

// Function: e2d_id17_type1d
// Address: 0x2b24b0 - 0x2b252c
void e2d_id17_type1d_0x2b24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type1d_0x2b24b0");
#endif

    ctx->pc = 0x2b24b0u;

    // 0x2b24b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b24b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b24b8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b24bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b24bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b24c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b24c4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b24c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b24c8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b24cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b24ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b24d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b24d4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b24d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b24d8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b24dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b24dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b24e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b24e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b24e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b24e8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b24ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b24ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b24f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b24f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b24f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b24f8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b24fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b24fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2500: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2504: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2508: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b2508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b250c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2510: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2514: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2518: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b251c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b251cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2520: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2524: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B252Cu;
}
