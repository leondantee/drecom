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

// Function: e2d_id17_type16
// Address: 0x2b2280 - 0x2b2300
void e2d_id17_type16_0x2b2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type16_0x2b2280");
#endif

    ctx->pc = 0x2b2280u;

    // 0x2b2280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2284: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b2284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b2288: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b228c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b228cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2290: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2294: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b2294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b2298: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b2298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b229c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b229cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b22a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22a4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b22a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b22a8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b22ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b22acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b22b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22b4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b22b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b22b8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b22bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b22bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b22c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b22c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b22c8: 0x3c034454  lui         $v1, 0x4454
    ctx->pc = 0x2b22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17492 << 16));
    // 0x2b22cc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b22ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b22d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b22d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b22d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b22d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b22dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b22dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b22e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22e4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b22e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b22e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b22e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b22ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22f0: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b22f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b22f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b22f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b22f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B22F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2300u;
}
