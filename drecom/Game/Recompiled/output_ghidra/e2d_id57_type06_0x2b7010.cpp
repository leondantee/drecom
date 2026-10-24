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

// Function: e2d_id57_type06
// Address: 0x2b7010 - 0x2b7074
void e2d_id57_type06_0x2b7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type06_0x2b7010");
#endif

    ctx->pc = 0x2b7010u;

    // 0x2b7010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7014: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b7014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b7018: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b701c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b701cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7020: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7024: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7028: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b702c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b702cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7030: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7034: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b7034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7038: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2b7038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2b703c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b703cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7040: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7044: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b7048: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b704c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b704cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7050: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7054: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b7054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b7058: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b705c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b705cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7060: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7064: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b7064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b7068: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b7068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b706c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7074u;
}
