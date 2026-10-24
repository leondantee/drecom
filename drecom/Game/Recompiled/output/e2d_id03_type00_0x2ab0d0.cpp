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

// Function: e2d_id03_type00
// Address: 0x2ab0d0 - 0x2ab134
void e2d_id03_type00_0x2ab0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type00_0x2ab0d0");
#endif

    ctx->pc = 0x2ab0d0u;

    // 0x2ab0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab0d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ab0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ab0d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab0e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab0e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ab0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ab0e8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab0f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab0f4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ab0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ab0f8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab0fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab100: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab104: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ab104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ab108: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab110: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab114: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ab114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ab118: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ab11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab120: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab124: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ab124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ab128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ab128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab12c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB134u;
}
