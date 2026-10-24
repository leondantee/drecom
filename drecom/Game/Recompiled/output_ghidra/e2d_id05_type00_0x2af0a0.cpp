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

// Function: e2d_id05_type00
// Address: 0x2af0a0 - 0x2af0f4
void e2d_id05_type00_0x2af0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type00_0x2af0a0");
#endif

    ctx->pc = 0x2af0a0u;

    // 0x2af0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af0a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af0a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af0b4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2af0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2af0b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af0c4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2af0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2af0c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af0cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af0d4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2af0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2af0d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2af0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2af0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af0e4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2af0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2af0e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF0F4u;
}
