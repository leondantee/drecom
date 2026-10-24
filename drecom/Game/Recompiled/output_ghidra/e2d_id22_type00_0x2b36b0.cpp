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

// Function: e2d_id22_type00
// Address: 0x2b36b0 - 0x2b3704
void e2d_id22_type00_0x2b36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id22_type00_0x2b36b0");
#endif

    ctx->pc = 0x2b36b0u;

    // 0x2b36b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b36b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b36b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b36bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b36bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b36c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b36c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b36c4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b36c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b36c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b36cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b36ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b36d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b36d4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b36d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b36d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b36dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b36dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b36e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b36e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b36e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b36e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b36e8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b36ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b36ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b36f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b36f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b36f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b36f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b36f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b36fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B36FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B36FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3704u;
}
