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

// Function: e2d_id17_type13
// Address: 0x2b1fa0 - 0x2b2008
void e2d_id17_type13_0x2b1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type13_0x2b1fa0");
#endif

    ctx->pc = 0x2b1fa0u;

    // 0x2b1fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1fa4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1fa8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1fb4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1fc0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1fcc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1fd0: 0x3c034340  lui         $v1, 0x4340
    ctx->pc = 0x2b1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17216 << 16));
    // 0x2b1fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1fdc: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1fe0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b1fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fe8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1fec: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1ff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1ff4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1ff8: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b1ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1ffc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2000: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2008u;
}
