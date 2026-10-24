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

// Function: e2d_id00_type00
// Address: 0x2a9480 - 0x2a94d4
void e2d_id00_type00_0x2a9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type00_0x2a9480");
#endif

    ctx->pc = 0x2a9480u;

    // 0x2a9480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9484: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2a9484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2a9488: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a948c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a948cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9490: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9494: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2a9494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2a9498: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a949c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a949cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a94a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a94a4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2a94a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2a94a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a94ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a94acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a94b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a94b4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2a94b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2a94b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a94bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a94bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a94c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a94c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2a94c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2a94c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2a94c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a94cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A94CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A94CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A94D4u;
}
