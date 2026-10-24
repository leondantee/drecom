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

// Function: e2d_id17_type19
// Address: 0x2b2380 - 0x2b23fc
void e2d_id17_type19_0x2b2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type19_0x2b2380");
#endif

    ctx->pc = 0x2b2380u;

    // 0x2b2380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2384: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b2384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b2388: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b2388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b238c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b238cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2390: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2394: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b2394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b2398: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x2b239c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b239cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b23a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23a4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b23a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b23a8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b23ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b23acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b23b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23b4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b23b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b23b8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b23bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b23bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b23c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b23c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b23c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b23cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b23ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b23d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b23d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b23d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b23dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23e0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b23e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b23e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b23e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b23ec: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b23ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b23f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b23f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B23F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B23FCu;
}
